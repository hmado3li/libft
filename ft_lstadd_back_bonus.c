/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:51:49 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/22 22:07:55 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	node = ft_lstlast(*lst);
	node->next = new;
}
// int main()
// {
//   char *p = "1";
//   char *p1 = "2";
//   char *p2 = "3";
//   char *p3 = "4";
//   t_list *n1 = NULL;
//     // t_list *n1 = ft_lstnew(p);
//     // n1->next = ft_lstnew(p1);
//     // n1->next->next = ft_lstnew(p2);
//     t_list *n = ft_lstnew(p3);
//     ft_lstadd_back(&n1,n);
//     while (n1)
//     {
//         printf("%c\n", *(char *)n1->content);
//         n1 = n1->next;
//     }
// }
