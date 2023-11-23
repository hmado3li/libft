/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:38:06 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/22 17:57:31 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
// int main()
// {
//     t_list *nd1 = ft_lstnew("1");
//     t_list *nd2 = ft_lstnew("2");
//     t_list *nd3 = ft_lstnew("3");
//     t_list *nd4 = ft_lstnew("4"); 
//     nd1->next = nd2;
//     nd2->next = nd3;
//     nd3->next = nd4;
//     printf("%d", ft_lstsize(nd1));
// }
