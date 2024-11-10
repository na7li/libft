/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:28:01 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/10 18:17:04 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcpy(char *dst, const char *src, int dstsize)
{
    int i;    
    size_t strlen;
    
    i = 0;
    strlen = 0;
    while (src[strlen] != '\0') // strlen = ft_strlen(src); define the strlen function in libft.h
        strlen++;
    if (dstsize == 0) // if dstsize is 0, return the length of the src.
        return (strlen);
    while (src[i] != '\0' && i < dstsize - 1) // copy the src dtring to the dst string.
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';  // add the null terminator to the end of the dst string.
    return (strlen);
}