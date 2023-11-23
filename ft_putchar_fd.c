/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:53:16 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/14 12:37:41 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
// int main()
// {
// 	int fd = open("fil.txt", O_CREAT | O_RDWR, 0700);
// 	printf ("%d", fd);
// 	if (fd < 0)
// 		write (1, "0", 1);
// 	ft_putchar_fd('f', fd);
// }
