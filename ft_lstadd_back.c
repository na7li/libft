/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:03:04 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 19:44:03 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	if (!ptr)
		*lst = new;
	ptr = ft_lstlast(*lst);
	ptr->next = new;
	new->next = NULL;
}
// int main()
// {
//     t_list* n1, *n2, *n3, *n4, *n5;
//     n1 = malloc(sizeof(t_list));
//     n2 = malloc(sizeof(t_list));
//     n3 = malloc(sizeof(t_list));
//     n4 = malloc(sizeof(t_list));
//     n5 = malloc(sizeof(t_list));
//     n1->content = "my";
//     n1->next = n2;
//     n2->content = "name";
//     n2->next = n3;
//     n3->content = "is";
//     n3->next = n4;
//     n4->content = "simon";
//     n4->next = NULL;
//     t_list* tmp = n1;
//     // while (tmp)
//     // {
//     //     printf("%s ", tmp->content);
//     //     tmp = tmp->next;
//     // }
//     // printf("\n");

//     n5->content = "nahli";
//     // n5->next = NULL;

//     ft_lstadd_back(&tmp, n5);

//     // t_list* tmp = n1;
//     while (tmp)
//     {
//         printf("%s ", tmp->content);
//         tmp = tmp->next;
//     }
//     printf("\n");

//     return (0);
// }