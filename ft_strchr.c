/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:57 by mnahli            #+#    #+#             */
/*   Updated: 2024/10/31 13:29:45 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char x = (char)c;
    unsigned int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == x)
            return ((char *)s + i);
        i++;
    }
    if (s[i] == '\0')
        return ((char *)s + i);
    return (NULL);
}
// int main()
// {
//     char str[] = "Hello";
//     printf("%s\n",strchr(str, 'H'));
//     printf("%s\n",ft_strchr(str, 'H'));
//     return 0;
// }