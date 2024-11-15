/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:20:03 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/15 20:54:12 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
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
// 	ft_lstdelone(n1, del);
// 	while (tmp)
// 	{
// 			printf("%s ", tmp->content);
// 			tmp = tmp->next;
// 	}
// }