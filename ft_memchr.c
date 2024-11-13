/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:49 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 12:14:08 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	x;
	size_t	i;

	ptr = (unsigned char *)s;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == x)
			return ((char *)ptr + i);
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char str[] = "abcde";
//     char c = 'c';
//     size_t n = 9;
//     printf("%p\n", ft_memchr(str, c, n));
//     printf("%p\n", memchr(str, c, n));

//     char *pos = memchr(str, c, n);
//     printf("pos0 %c\n", pos[0]);
//     printf("pos1 %c\n", pos[1]);
// }