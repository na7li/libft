/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:57:52 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/15 15:41:22 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// void lower(void * content)
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
// }

// int main()
// {
// 	t_list *n1, *n2, *n3;

//     n1 = malloc(sizeof(t_list));
//     n2 = malloc(sizeof(t_list));
//     n3 = malloc(sizeof(t_list));
//     n1->content = ft_strdup("HELLO");
//     n1->next = n2;
//     n2->content = "world";
//     n2->next = n3;
//     n3->content = "by";
//     n3->next = NULL;
// 	ft_lstiter(n1, lower);
// 	printf("%s\n", n1->content);
// }