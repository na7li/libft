/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:29:11 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/02 17:50:17 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t total;
    unsigned char *ptr;

    total = count * size;
    ptr = malloc(total);
    if (ptr == '\0')
        return NULL;
    ft_bzero(ptr, total);
    return (ptr);
}

// int main()
// {
//     int *t =  ft_calloc(0, 4);
//     int *t2 =  calloc(0, 4);
//     for (size_t i = 0; i < 4; i++)
//     {
//         printf("t  %d\n",t[i]);
//         printf("t2 %d\n", t2[i]);
//         free (NULL);
//     }
// }