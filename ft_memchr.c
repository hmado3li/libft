/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:00:33 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/08 23:11:10 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
/*int main()
{
    char s[] = "bainkai tensa zngitsu";
    char d[] = "bainkai tensa zngitsu";

    printf("%s\n%s", ft_memchr(s, 'y', 34), memchr(d, 'y', 34));
}*/
