/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:28:05 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 15:42:51 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	need_len;

	i = 0;
	need_len = ft_strlen(needle);
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i] == needle[j] && j < need_len)
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i - j);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char haystack[] = "i lean c language in 42 school";
//     char needle[] = "lang";
//     size_t len = 0;

//     printf("%s\n", ft_strnstr(haystack, needle, len));
//     printf("%s\n", strnstr(haystack, needle, len));
//     printf("%p\n", ft_strnstr(haystack, needle, len));
//     printf("%p\n", strnstr(haystack, needle, len));
// }