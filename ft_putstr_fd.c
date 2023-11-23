/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:35:01 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/22 17:55:08 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}
// int main()
// {
// 	int fd = open("file.txt3", O_CREAT | O_RDWR, 0700);
// 	char *p = "bankai sakashi yokoshima hapo fsagari";
// 	ft_putstr_fd(p, fd);
// 	printf ("%d", fd);
// 	close(fd);
// 	int fd1 = open("file.txt4", O_CREAT | O_RDWR, 0700);
// 	char *p1 = "bankai kanon biraki binihimi aratami";
// 	ft_putstr_fd(p1, fd1);
// 	printf ("%d", fd1);
// 	close(fd1);
// 	int fd2 = open("file.txt5", O_CREAT | O_RDWR, 0700);
// 	char *p2 = "bankai shatsu karagara shigarami no tsuji";	
// 	ft_putstr_fd(p2, fd2);
// 	printf ("%d", fd2);
// 	close(fd2);
// }
