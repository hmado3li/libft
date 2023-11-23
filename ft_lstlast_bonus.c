/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 10:34:36 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/22 18:05:36 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// int main()
// {
//     t_list *nod1 = ft_lstnew("abcd");
//     t_list *nod2 = ft_lstnew("abcde");
//     t_list *nod3 = ft_lstnew("abcdef");
//     nod1 -> next = nod2;
//     nod2 -> next = nod3;
//     t_list *b = ft_lstlast(nod1);
//     printf("%s\n",b -> content);
// }
