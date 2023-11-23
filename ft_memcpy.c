/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:12:04 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/23 21:32:53 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dst == src)
		return (dst);
	if (!dst && !src)
		return (NULL);
	while (i < n) 
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
// int main()
// {
//     // int s[4] = {5, 678, 89, 89};
//     // int s1[4] = {4444, 222, 7, 8};
// 	char s[] = "sfdgh";
// 	char f[] = "tyfkuy";
//     // memcpy(s, s1, 5);
// // for (int i = 0 ;i < 5; i++)  
// //   {  
// //     printf("%d\n", s[i]);
// //   }
// ft_memcpy(s, f, 5);
//     printf("%s\n", s);
// }
