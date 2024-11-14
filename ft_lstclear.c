/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:11:13 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/12 12:46:12 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}

// f

// void del(void* content)
// {
// 	free(content);
// }
// int main()
// {
// 	t_list* n1, *n2, *n3, *n4;
// 	n1 = malloc(sizeof(t_list));
// 	n2 = malloc(sizeof(t_list));
// 	n3 = malloc(sizeof(t_list));
// 	n4 = malloc(sizeof(t_list));
// 	t_list* tmp;
// 	tmp = n1;
// 	n1->content = ft_strdup("my");
// 	n1->next = n2;
// 	n2->content = ft_strdup("name");
// 	n2->next = n3;
// 	n3->content = ft_strdup("is");
// 	n3->next = n4;
// 	n4->content = ft_strdup("simo");
// 	n4->next = NULL;
// 	ft_lstclear(&n1, del);
// 	if (n1 == NULL)
// 		printf("list is cleared");
// }

// void ft_lstclear(t_list **lst, void (*del)(void*))
// {
//     t_list* tmp;

//     tmp = *lst;
//     while(*lst != NULL)
//     {
//         tmp = (*lst)->next;
//         del((*lst)->content);
//         free(*lst);
//         *lst = tmp;
//     }
//         del((*lst)->content);
//         free(*lst);
//         free(&tmp);
//         *lst = NULL;
// }
