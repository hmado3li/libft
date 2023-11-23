/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hasn <sel-hasn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:52:34 by sel-hasn          #+#    #+#             */
/*   Updated: 2023/11/22 18:09:19 by sel-hasn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void f(void *s)
// {
//     int i;
//     char *p;

//     i = 0;
//     p = (char *)s;
//     while (p[i])
//     {
//         if(p[i] >= 'a' && p[i] <= 'z')
//             p[i] = p[i] - 32;
//         i++;
//     }
// }
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// int main()
// {
//     // char s[] = "bankai ";
//     // char a[] = "haka ";
//     // char b[] = "no togami";
//     t_list *n = ft_lstnew(ft_strdup("bankai "));
//     n->next = ft_lstnew(ft_strdup("haka "));
//     n->next->next = ft_lstnew(ft_strdup("no togami"));
//     ft_lstiter(n, f);
//     while (n)
//     {
//         printf ("%s", n->content);
//         n = n->next;
//     }
// }
