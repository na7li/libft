/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:47:55 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/12 13:52:54 by mnahli           ###   ########.fr       */
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
    return (len);
}
// int main()
// {
//     t_list* n0 = malloc(sizeof(t_list));
//     t_list* n1 = malloc(sizeof(t_list));
//     t_list* n2 = malloc(sizeof(t_list));
//     t_list* n3 = malloc(sizeof(t_list));
//     n0->content = "My";
//     n0->next = n1;
//     n1->content = "name";
//     n1->next = n2;
//     n2->content = "is";
//     n2->next = n3;
//     n3->content = "simo";
//     n3->next = NULL;

//     printf("%d\n", ft_lstsize(n0));
// }