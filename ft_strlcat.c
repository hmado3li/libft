/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:15:57 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/12 08:34:06 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	i = ft_strlen(dst);
	j = 0;
	while (src[j] != '\0' && j + 1 < (size - i))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}
// int main()
// {
//     char d[16] = "NULL";
//     char s[15] = "sdhgfkuyg" ;

//      printf ("%zu", ft_strlcat("NULL", s, 0));
//     printf ("%zu", strlcat("NULL", s, 0));
// }
