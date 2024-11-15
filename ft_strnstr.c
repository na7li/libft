/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:28:05 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/15 20:41:57 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (len != 0 && haystack[i] && (i + ft_strlen(needle)) <= len)
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// char haystack[] = "i lean c language in 42 school";
// char needle[] = "lang";
//     size_t len = -1;

//     // printf("%s\n", ft_strnstr(haystack, needle, len));
//     printf("%s\n", strnstr(haystack, needle, len));
//     // printf("%p\n", ft_strnstr(haystack, needle, len));
//     // printf("%p\n", strnstr(haystack, needle, len));
// }