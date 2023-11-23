/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:22:47 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/02 19:40:29 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int main()
{
    printf("%d\n", ft_isprint('1'));
    printf("%d\n", ft_isprint('d'));
    printf("%d\n", ft_isprint(' '));
    printf("%d\n", ft_isprint('A'));
    printf("%d\n", ft_isprint(0));
}*/
