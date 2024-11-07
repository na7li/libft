/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:46:59 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/07 11:52:56 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_word_count(char **s, char *c)
{
    unsigned int i;
    size_t  n = 0;
    i = 0;
    while(s[i])
    {
        while(s[i] != c && s[i])
            i++;
        if(s[i] == '\0')
        {
            n++;
            break;
        }
        n++;
        i++;
    }
    return (n);
}
int ft_word_len(char *s, char c, unsigned int i)
{
    unsigned int l = 0;
    while(s[i] != c && s[i])
    {
        i++;
        l++;
    }
    return (l);
}

char **ft_split(char const *s, char c)
{
    unsigned int n;
    unsigned int m = 0;
    unsigned int j = 0;
    unsigned int k;
    unsigned int e;
    size_t l;
    n = ft_word_count(s, c);
    char** B;

    while(m < n)
    {
        l = ft_word_len(s, c, j);
        B = &B[m];
        B[m] = (char*)malloc((l + 1)*sizeof(char));
        if(!B)
            return NULL;
        k = 0;
        e = j;
        while(k < l)
            B[m][k++] = s[e++];
        B[m][k] == '\0';
        if(s[e] == '\0')
            break;
        j = j + l + 1;
        m++;
    }
    return (B);
}
int main()
{
    char s[] = "my name is med";
    printf("%s\n", ft_split(s, " "));
    return 0;
}