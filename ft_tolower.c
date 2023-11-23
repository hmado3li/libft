/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:14:53 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/02 19:36:54 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*int main()
{
    printf("%c\n", ft_tolower('P'));
    printf("%c\n", ft_tolower('1'));
    printf("%c\n", ft_tolower('w'));
    printf("%c\n", ft_tolower('D'));
    printf("%c\n", ft_tolower('/'));
}*/
