/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:28:05 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/02 11:23:15 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t need_len = ft_strlen(needle);
    
    i = 0;
    if (needle[i] == '\0')
        return ((char *)haystack);

    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i] == needle[j] && j < need_len)
        {
            i++;
            j++;
        }
        // if (j == need_len)
        if (needle[j] == '\0')
            return ((char *)haystack + i - j);
        i++;
    }
    return(NULL);
    
}

// int main()
// {
//     char haystack[] = "i lean c language in 42 school";
//     char needle[] = "leag";
//     size_t len = 50;
    
//     printf("%s\n", ft_strnstr(haystack, needle, len));
//     printf("%s\n", strnstr(haystack, needle, len));
//     printf("%p\n", ft_strnstr(haystack, needle, len));
//     printf("%p\n", strnstr(haystack, needle, len));
// }