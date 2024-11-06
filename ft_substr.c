/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:57:03 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/06 11:46:15 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char* substr;
    size_t s_len;
    unsigned int i = 0;

    if(!s) //DONE 1
        return NULL;
    s_len = ft_strlen(s);
    if(start >= s_len)   //DONE 2
        {
            substr = (char*)malloc(1);  //NEED FAIL ALLOCTION CASE
            if(!substr)
                return NULL;
            if(substr)
                substr[0] = '\0';
            return (substr);
        }
    if(len > (s_len - start))   //DONE 3
        len = s_len - start;
    substr = (char*)malloc((len + 1) * sizeof(char));  //DONE 4
    if(!substr)
        return NULL;
    while(i < len && s[start] != '\0')
        substr[i++] = s[start++];
    substr[i] = '\0';
    return (substr);
}

int main()
{
    char s[] = "Hello World hey weo";
    size_t len = 5;
    unsigned int start = 6;
    printf("%s\n", ft_substr(s, start, len));    
    return 0;
}