/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:01:52 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/22 20:03:54 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *s)
// {
//     free (s);
// }
// void *f(void *p)
// {
//     int i;
//     char *s;
//     i=0;
//     s = (char *)p;
//     while (s[i])
//     {
//         s[i] = ft_toupper(s[i]);
//         i++;
//     }
//     return (s);
// }
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;
	void	*p;

	new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		p = f(lst->content);
		node = ft_lstnew(p);
		if (!node)
		{
			del(p);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
// int main()
// {
//     t_list *n = ft_lstnew(ft_strdup("bankai "));
//     n->next = ft_lstnew(ft_strdup("sakashima yokoshima "));
//     n->next->next = ft_lstnew(ft_strdup("hapo fsagari"));
//     t_list *n1 = ft_lstmap(n, f, del);
//     while (n1)
//     {
//         printf("%s", n1->content);
//         n1 = n1->next;
//     }
// }
