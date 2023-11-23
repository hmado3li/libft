/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:56:38 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/22 18:12:38 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *p)
// {
//     free(p);
// }
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = node;
	}
}
// int main()
// {
//     t_list *n = ft_lstnew(ft_strdup("bankai "));
//     n->next = ft_lstnew(ft_strdup("tinsa "));
//     n->next->next = ft_lstnew(ft_strdup("zangitsu"));
//     ft_lstclear(&(n->next), &del);
//     printf ("%s", n->content);
// }
