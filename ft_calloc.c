/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:01:55 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/11 11:29:35 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(size * count);
	if (p == NULL)
		return (0);
	ft_bzero(p, count * size);
	return (p);
}
// int main()
// {
//     char *ptr;
//     ptr = ft_calloc(10,0);
//     for(int i = 0; i < 20; i++)
//     {
//         printf("%d", ptr[i]);
//     }
//     printf("\n");
// }
