/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:57 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 14:36:28 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;
	size_t	i;

	x = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == x)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == x)
		return ((char *)(s + i));
	return (NULL);
}
int main()
{
    char str[] = "Hello";
    printf("%s\n",ft_strchr(str, '\0'));
    printf("%s\n",strchr(str, '\0'));
    return 0;
}