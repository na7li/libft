/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:47:55 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/11 18:57:34 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int len;
    
    t_list* tmp;
    tmp = lst;
    len = 0;
    while(tmp != NULL)
    {
        len++;
        tmp = tmp->next;
    }
    return (tmp);
}