/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:03:04 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/12 09:19:01 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;
    ptr = *lst;
    
    while(ptr->next != NULL)
        ptr = ptr->next;
    if(!ptr)    // si ya pas de node (NULL) lst va pointer sur new;
        *lst = new;
    ptr->next = new;
    new->next = NULL;
}