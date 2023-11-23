/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:34:12 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/14 17:30:19 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] || str2[i]) && str1[i] == str2[i] && i < (n - 1))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
// int main()
// {
//     char s[] = "abcdef";
//     char r[] = "abcdefghijklmnop";
//     printf ("%d\n%d", ft_strncmp(s, r, 6) ,strncmp(s, r, 6));
// }
