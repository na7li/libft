/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:57 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/14 19:33:51 by mnahli           ###   ########.fr       */
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
// int main()
// {
// 	char s[] = "my name is med";
// 	int c = '\0';
// 	char *ptr = ft_strchr(s, c);
// 	char *org = strchr(s, c);

// 	printf("%s\n", ptr);
// 	printf("%s\n", org);
// 	printf("%p\n", ptr);
// 	printf("%p\n", org);
// }