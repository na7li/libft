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

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list* tmp;
    t_list* nxt_tmp;

    tmp = *lst;
    nxt_tmp = *lst;
    while(nxt_tmp->next->next != NULL)
    {
        del(tmp->content);
        free(tmp);
        tmp = nxt_tmp;
        nxt_tmp = nxt_tmp->next;
    }
        del(tmp->content);
        free(tmp);

        del(nxt_tmp->content);
        free(nxt_tmp);

        free(&tmp);
        free(&nxt_tmp);
        
        *lst = NULL;
}

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