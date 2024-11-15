/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:28:04 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/14 19:44:57 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((i < n) && (s1[i] || s2[i])))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
//     char str1 [] = "abcf";
//     char str2 [] = "abcdef";
//     size_t  n = 10;

//     printf("%d\n", ft_strncmp(str1, str2, n));
//     printf("%d\n", strncmp(str1, str2, n));
// }