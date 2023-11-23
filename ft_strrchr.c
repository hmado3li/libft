/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:11:16 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/14 17:17:53 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*str, int c)
{
	int	s;

	s = ft_strlen(str);
	while (s >= 0)
	{
		if (str[s] == (char)c)
			return ((char *)&str[s]);
		s--;
	}
	return (0);
}
// int main()
// {
// 	const char  a[] = "bankai minasoki";

// 	// printf("%s\n", ft_strrchr(a, 'o'));
// 	//printf("%s\n", strrchr(NULL, 's'));
// 	// printf("%s\n", strrchr(a, '\0'));
// 	// printf("%s", ft_strrchr(a, '\0'));
// }
