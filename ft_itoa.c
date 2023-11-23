/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:52:39 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/22 15:11:14 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrlen(int nbr)
{
	int				i;
	long long int	n;

	n = nbr;
	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				len;
	long long int	nb;
	char			*s;

	len = nbrlen(n);
	nb = n;
	if (n < 0)
		nb = -nb;
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (nb == 0)
		s[0] = '0';
	else
	{
		if (n < 0)
			s[0] = '-';
		while (nb != 0 && len-- >= 0)
		{
			s[len] = (nb % 10) + 48;
			nb = (nb / 10);
		}
	}
	return (s);
}
// int main()
// {
//     int i;
//     char *p;
//     //     // i = -9;
//     // p = ft_itoa(-9223372036854775808);
//     printf ("%s", ft_itoa(-9223372036854775808));
// }
