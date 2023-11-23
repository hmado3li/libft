# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 15:28:40 by sel-hasn          #+#    #+#              #
#    Updated: 2023/11/22 21:36:05 by sel-hasn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SURCS =        ft_isalpha.c    ft_memcmp.c     ft_putendl_fd.c ft_striteri.c   ft_strmapi.c    ft_substr.c\
ft_atoi.c       ft_isascii.c    ft_memcpy.c     ft_putnbr_fd.c  ft_strjoin.c    ft_strncmp.c    ft_tolower.c\
ft_bzero.c      ft_isdigit.c    ft_memmove.c    ft_putstr_fd.c  ft_strlcat.c    ft_strnstr.c    ft_toupper.c\
ft_calloc.c     ft_isprint.c    ft_memset.c     ft_strchr.c     ft_strlcpy.c    ft_strrchr.c    ft_isalnum.c \
ft_memchr.c     ft_putchar_fd.c ft_strdup.c     ft_strlen.c     ft_strtrim.c  ft_itoa.c ft_split.c

BSURCS =  ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c \
ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c ft_lstiter_bonus.c 
    
OBJECTS = $(SURCS:.c=.o)

B_OBJECTS = $(BSURCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rc
HDR = libft.h

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

bonus: $(B_OBJECTS)
	$(AR) $(NAME) $(B_OBJECTS)

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJECTS) $(B_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all