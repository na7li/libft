/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:46:59 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/11 21:09:13 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_word_count(char const *s, char c)
{
    unsigned int i;
    unsigned int word;
    unsigned int n;
    
    i = 0;
    n = 0;
    word = 0;
    while(s[i])
    {
        if(s[i] != c && word == 0)
        {
            word = 1;
            n++;
        }
        else if(s[i] == c)
            word = 0;
        i++;
    }
    return (n);
}

static int ft_word_len(char const *s, char c, unsigned int i)
{
    unsigned int l;
    l = 0;
    while(s[i] != c && s[i])
    {
        i++;
        l++;
    }
    return (l);
}
static char* ft_word_copy(char const *s, unsigned int j, size_t l)
{
    unsigned int i;
    char* word;
    word = (char*)malloc((l + 1) * sizeof(char));
    if(!word)
        return (NULL);
    i = 0;
    while(i < l)
    {
        word[i] = s[j + i];
        i++;
    }
    word[i] = '\0';
    return (word);
}
char **ft_split(char const *s, char c)
{
    unsigned int n;
    unsigned int j;
    unsigned int m;
    size_t l;
    n = ft_word_count(s, c);
    char** B = (char**)malloc((n + 1) * sizeof(char*));
    if(!B)
        return (NULL);
    m = 0;
    j = 0;
    while(m < n)
    {
        while (s[j] == c && s[j])
            j++;
        l = ft_word_len(s, c, j);
        B[m] = ft_word_copy(s, j, l);
        if(!B[m])
            return (NULL);
        j = j + l;
        m++;
    }
    B[m] = NULL;
    return (B);
}

// int main()
// {
//     char s[] = "  my na    me is med";
//     char **result = ft_split(s, ' ');

//     // Print each word in the result
//     int i = 0;
//     while (result[i]) {
//         printf("%s\n", result[i]);
//         free(result[i]); // Free each allocated word
//         i++;
//     }
//     free(result); // Free the array itself
//     return 0;
// }