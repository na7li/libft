/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:53:53 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/15 20:53:53 by mnahli           ###   ########.fr       */
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
//     t_list *head;
//     t_list *temp;
//     t_list *n1, *n2, *n3;

//     // head = malloc(sizeof(t_list));
//     n1 = malloc(sizeof(t_list));
//     n2 = malloc(sizeof(t_list));
//     n3 = malloc(sizeof(t_list));
//     temp = n1;
//     n1->content = "hello";
//     n1->next = n2;
//     n2->content = "world";
//     n2->next = n3;
//     n3->content = "by";
//     n3->next = NULL;
//     // while (temp->next != NULL)
//     // {
//     //     printf("%s\n", temp->content);
//     //     temp = temp->next;
//     // }
//     // printf("%s\n", temp->content);

//     t_list *n0;
//     n0 = malloc(sizeof(t_list));
//     n0->content = "slm ";
//     n0->next = NULL;
//     ft_lstadd_front(&temp, n0);
//     while (temp->next != NULL)
//     {
//         printf("%s\n", temp->content);
//         temp = temp->next;
//     }
//     printf("%s\n", temp->content);
//     return (0);
// }