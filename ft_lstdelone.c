/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:20:03 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/12 11:39:16 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    t_list* tmp;

    tmp = lst;
    del(tmp->content);    // on a fait appeler la fct elle meme : Call back
    free(lst);
}