/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:20:59 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/16 17:58:47 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	void	*content;

	newlist = NULL;
	newnode = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		newnode = ft_lstnew(content);
		if (!newnode)
		{
			del(content);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}

// void* lower(void * content)
// {
// 	int i = 0;
// 	char *str = (char *)content;
// 	while (str[i])
// 	{
// 		if (str[i] >= 'A' && str[i] <= 'Z')
// 		{
// 			str[i] += 32;
// 		}
// 		i++;
// 	}
// 	return (str);
// }

// void del(void* content)
// {
// 	free(content);
// }

// int main ()
// {
// 	t_list *newlist;
// 	t_list *n1, *n2, *n3;
//     n1 = malloc(sizeof(t_list));
//     n2 = malloc(sizeof(t_list));
//     n3 = malloc(sizeof(t_list));
//     n1->content = strdup("MOHAEMD");
//     n1->next = n2;
//     n2->content = strdup("WORLD");
//     n2->next = n3;
//     n3->content = strdup("BY");
//     n3->next = NULL;
// 	t_list *tmp;
// 	tmp = n1;
// 	while (tmp)
// 	{
// 		printf("%s - ", tmp->content);
// 		tmp = tmp->next;
// 	}
// 		newlist = ft_lstmap(n1, lower, del);
// 		newlist = malloc(NULL);
// 		printf("\n");
// 	while (newlist)
// 	{
// 		printf("%s - ", newlist->content);
// 		newlist = newlist->next;
// 	}

// }
