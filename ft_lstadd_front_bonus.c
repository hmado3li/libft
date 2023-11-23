/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:14:31 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/22 18:14:25 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main()
// {
//     int *p1;
//     int *p2;
//     int *p3;
//     int *p4;
//     p1 = "1";
//     p2 = "2";
//     p3 = "3";
//     p4 = "0";
//     t_list *n1 = ft_lstnew(p1);
//     n1->next = ft_lstnew(p2);
//     n1->next->next = ft_lstnew(p3);
//     t_list *n0 = ft_lstnew(p4);
//     ft_lstadd_front(&n1, n0);
//     // printf("%c\n", *(int *)n1->content);
//     // n1 = n1 ->next;
//     // printf("%c\n", *(int *)n1->content);
//     // n1 = n1 ->next;
//     // printf("%c\n", *(int *)n1->content);
//     // n1 = n1 ->next;
//     // printf("%c\n", *(int *)n1->content);
//     t_list *node;
//     node = n0;
//     while (node)
//     {
//         printf("%c\n", *(int*)node->content);
//         node = node->next;
//     }
// }
// int main()
// {
//     int i = 1;
//     int i1 = 2;
//     int i2 = 3;
//     int i3 = 0;
//     // t_list *n1 = NULL;
//     t_list *n1 = ft_lstnew(&i);
//     n1->next = ft_lstnew(&i1);
//     n1->next->next = ft_lstnew(&i2);
//     t_list *n0 = ft_lstnew(&i3);
//     ft_lstadd_front(&n1, NULL);
//     while (n1)
//     {
//         printf("%d\n", *(int*)n1->content);
//         n1 = n1->next;
//     }
// }
