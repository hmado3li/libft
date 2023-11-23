/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:49:31 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/08 22:30:10 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len_s1;
	size_t	len_s2;

	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1) || !(s2))
	{
		if (!s1)
			return (ft_strdup(s2));
		else if (!s2)
			return (ft_strdup(s1));
	}
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) *(len_s1 + len_s2 + 1));
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, len_s1 + 1);
	ft_strlcat(s, s2, len_s2 + len_s1 + 1);
	return (s);
}
/*int main()
{
    char a[] = "bankai ";
    char b[] = "haka no togami";

    printf ("%s\n", ft_strjoin(a, b));
}*/
