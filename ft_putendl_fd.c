/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:44:52 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/22 17:55:34 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	write (fd, "\n", 1);
}
// int main()
// {
// 	int fd = open("file.txt", O_CREAT | O_RDWR, 0700);
// 	char *p = "bankai tinsa zangi tsu";
// 	ft_putendl_fd(p, 1);
// 	printf ("%d", fd);
// 	close(fd);
// 	int fd1 = open("file.txt1", O_CREAT | O_RDWR, 0700);
// 	char *p1 = "bankai zanka no tachi";
// 	ft_putendl_fd(p1, fd1);
// 	printf ("%d", fd1);
// 	close(fd1);
// 	int fd2 = open("file.txt2", O_CREAT | O_RDWR, 0700);
// 	char *p2 = "bankai haka no togami";
// 	ft_putendl_fd(p2, fd2);
// 	printf ("%d", fd2);
// 	close(fd2);
// }