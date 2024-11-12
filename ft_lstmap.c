/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:20:59 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/12 17:38:17 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list* newlist;
    t_list* newnode;
    void* content;

    newlist = NULL;
    if(!lst || !f || !del)
        return (NULL);
    while (lst)
    {
        content = f(lst->content);
        newnode = mallo(sizeof(t_list));
        newnode->content = content;
        newnode->next = NULL;
        if(!newnode)
        {
            if(content)
                del(content);
            ft_sltclear(&newlist, del);
            return (NULL);
        }
        ft_lstadd_back(&newlist, newnode);
        lst = lst->next;
    }
    return (newlist);
}