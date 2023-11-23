/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:56:51 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/02 19:37:47 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*int main()
{
    printf("%c\n", ft_toupper('a'));
    printf("%c\n", ft_toupper('B'));
    printf("%c\n", ft_toupper('l'));
    printf("%c\n", ft_toupper('2'));
    printf("%c\n", ft_toupper('/'));
}*/
