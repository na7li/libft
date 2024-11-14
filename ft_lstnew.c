/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:19:47 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 19:50:58 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
// int main()
// {
//     t_list* new;
//     new = malloc(sizeof(t_list));
//     new->content = (long *)124545454545454;
//     new->next = NULL;
//     printf("%ld\n", (long)new->content);
//     return (0);
// }