/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:35:55 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/23 22:38:34 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space(char const *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

static int	sing(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char	*str)
{
	int			i;
	long long	r;
	int			s;
	int			d;

	r = 0;
	i = space(str);
	s = sing(str[i]);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		d = str[i] - '0';
		if (r > (9223372036854775807 - d) / 10)
		{
			if (s == 1)
				return (-1);
			else
				return (0);
		}
		r = (r * 10) + d;
		i++;
	}
	return (r * s);
}
// int main()
// {
//     printf("%d\n", ft_atoi("000000673"));
// 	printf("%d\n", atoi("000000673"));
// }
