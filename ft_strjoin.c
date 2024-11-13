/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:54:38 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 11:46:06 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;
	size_t	i;
	size_t	j;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len;
	ptr = (char *)malloc((total_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] && j < total_len + 1)
		ptr[j++] = s1[i++];
	i = 0;
	while (s2[i] && j < total_len + 1)
		ptr[j++] = s2[i++];
	ptr[j] = '\0';
	return (ptr);
}
// int main()
// {
//     char s1[] = "med";
//     char s2[] = "nahli";
//     printf("%s\n", ft_strjoin(s1, s2));

//     printf("%lu\n", strlen(ft_strjoin(s1, s2)));
//     printf("%lu\n", sizeof(ft_strjoin(s1, s2)));
// return 0;
// }