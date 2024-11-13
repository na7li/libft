/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:57:51 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 12:17:18 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
// int main()
// {
//     t_list* n0 = malloc(sizeof(t_list));
//     t_list* n1 = malloc(sizeof(t_list));
//     t_list* n2 = malloc(sizeof(t_list));
//     t_list* n3 = malloc(sizeof(t_list));
//     n0->content = "My";
//     n0->next = n1;
//     n1->content = "name";
//     n1->next = n2;
//     n2->content = "is";
//     n2->next = n3;
//     n3->content = "simo";
//     n3->next = NULL;

//     t_list* tmp = ft_lstlast(n0);

//     printf("%s\n", tmp->content);
// }