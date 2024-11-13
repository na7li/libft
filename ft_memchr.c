/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:49 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 15:23:42 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	x;
	size_t	i;

	str = (unsigned char *)s;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == x)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char str[] = "abcde";
//     char c = 'j';
//     size_t n = 6;
//     printf("%p\n", ft_memchr(str, c, n));
//     printf("%p\n", memchr(str, c, n));

//     char *pos = memchr(str, c, n);
//     printf("mine	%s\n", ft_memchr(str, c, n));
//     printf("their	%s\n", memchr(str, c, n));

// }