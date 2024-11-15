/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:28:09 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/14 19:38:07 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	size_t	i;
	size_t	j;

	x = (char)c;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == x)
			j = i;
		i++;
	}
	if (s[j] == x)
		return ((char *)(s + j));
	if (s[i] != x)
		return (NULL);
	return ((char *)(s + i));
}

// int main()
// {
//     char str[] = "Hello World!";
//     printf("%s\n",ft_strrchr(str, 'W'));
//     printf("%s\n",strrchr(str, 'W'));
//     return 0;
// }