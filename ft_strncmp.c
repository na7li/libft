/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:28:04 by mnahli            #+#    #+#             */
/*   Updated: 2024/10/31 15:01:17 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i = 0;
    
    if ((unsigned char) s1[i] == (unsigned char) s2[i])
    {
        while (s1[i] == s2[i] && i < n)
            i++;
        return ((unsigned char) s1[i] - (unsigned char) s2[i]);
    }
    return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
int main()
{
    char str1 [] = "abcdef";
    char str2 [] = "abcdef";
    size_t  n = 15;
    
    printf("%d\n", ft_strncmp(str1, str2, n));
    printf("%d\n", strncmp(str1, str2, n));
}