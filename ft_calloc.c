/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:29:11 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 17:06:22 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	unsigned char	*ptr;

	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

int main()
{
    int *t1 =  ft_calloc(10, 4);
    int *t2 =  calloc(10, 4);
    for (size_t i = 0; i < 4; i++)
    {
        printf("t  %d\n", t1[i]);
        printf("t2 %d\n", t2[i]);
        free (NULL); // handle the free situation
    }
}