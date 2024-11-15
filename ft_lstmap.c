/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:20:59 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/15 16:57:57 by mnahli           ###   ########.fr       */
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
		newnode = malloc(sizeof(t_list));
		newnode->content = content;
		newnode->next = NULL;
		if (!newnode)
		{
			if (content)
				del(content);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}

void* lower(void * content)
{
	int i = 0;
	char *str = (char *)content;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

void del(void* content)
{
	free(content);
}
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main ()
{
	t_list *newlist;
	t_list *n1, *n2, *n3;
    n1 = malloc(sizeof(t_list));
    n2 = malloc(sizeof(t_list));
    n3 = malloc(sizeof(t_list));
    n1->content = strdup("MOHAEMD");
    n1->next = n2;
    n2->content = strdup("WORLD");
    n2->next = n3;
    n3->content = strdup("BY");
    n3->next = NULL;

	newlist = ft_lstmap(n1, lower, del);

	    // Print original list
    printf("Original List:\n");
    ft_lstiter(newlist, print_content);

    // Print new list
    printf("\nMapped List:\n");
    ft_lstiter(newlist, print_content);

	// printf("%s\n", newlist->content);
}
