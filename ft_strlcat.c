/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:59 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/14 19:21:24 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main()
// {
//     size_t s = 5;

//     char ftdst[50] = "abc";
//     char dst[50] = "abc";
//     char src[50] = "defg";
//     printf("1.1 dst lenth is :  %ld\n", strlen(dst));
//     printf("1.2 dst_size =  %zu\n", s);
//     printf("2. src lenth =  4\n");

//     printf("ft_strlcat return is :     %ld\n", ft_strlcat(ftdst, src, s));
//     printf("dst is :    %s\n", ftdst);

//     printf("strlcat return is :     %ld\n", strlcat(dst, src, s));
//     printf("dst is :    %s\n", dst);
//     printf("\n");
//     return 0;
// }