/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:43:25 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/22 17:55:51 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)(b);
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
// int main()
// {
// 	int i = 0;
// 	// ft_memset(&i, 1337, 4);
// 	ft_memset(&i, 5, 2);
// 	ft_memset(&i, 57, 1);
// 	printf("%d", i);
// 	char i[5];
// 	ft_memset(i, '7', 4);
// 	ft_memset(i, '3', 3);
// 	ft_memset(i, '1', 1);
// 	printf("%s", i);
// }
