/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:39:55 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/02 19:41:21 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*int main()
{
    printf("%d\n", ft_isascii('0'));
    printf("%d\n", ft_isascii('d'));
    printf("%d\n", ft_isascii(222));
    printf("%d\n", ft_isascii('>'));
}*/
