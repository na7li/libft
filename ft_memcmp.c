/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:51 by mnahli            #+#    #+#             */
/*   Updated: 2024/10/31 21:46:11 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptr1;
    unsigned char *ptr2;
    size_t i = 0;

    ptr1 = (unsigned char *) s1;
    ptr2 = (unsigned char *) s2;

    while (i < n)
    {
        if ((unsigned char) ptr1[i] != (unsigned char) ptr2[i])
            return ((unsigned char) ptr1[i] - (unsigned char) ptr2[i]);
        i++;
    }
    return 0;
}

// int main()
// {
//     char s1[10] = "abcfe";
//     char s2[10] = "abcfe";
//     size_t n = 9;

//     printf("%d\n", ft_memcmp(s1, s2, n));
//     printf("%d\n", memcmp(s1, s2, n));
// }