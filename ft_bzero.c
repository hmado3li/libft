/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:47:31 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/13 22:49:39 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t	len)
{
	ft_memset(s, 0, len);
}
// int main()
// {
// 	// char a[] = "kyvhgv";
// 	int *a = {1,2,3,4,5};
// 	bzero(a, 20);
// 	printf("%d", a);
// }
