/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:57:58 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/08 22:24:56 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dsize > 0)
	{
		while (src[i] != '\0' && dsize - 1 > i)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
// int main()
// {
//     char a[] = "bankai tensa zangitsu";
//     char b[1] = "";
//     char c[] = "bankai tensa zangitsu";
//     char d[1] = "";

//     printf("%zu\n", strlcpy(d, c, -5));
// }
