/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:44:02 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/22 18:10:42 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void del(void *p)
// {
//     free(p);
// }
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// int main()
// {
//     t_list *n = ft_lstnew(ft_strdup("sss\n"));
//     n->next = ft_lstnew(ft_strdup("fff"));
//     n->next->next = ft_lstnew(ft_strdup("hhh"));
//     t_list *m = n; 
//     ft_lstdelone(ft_lstlast(n), &del);
//     while (m)
//     {
//     printf("%s", m->content);
//     m = m->next;
//     }
// }
