/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:46:23 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/14 21:55:50 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_prefix_len(const char *s1, char const *set)
{
	size_t	len_prefix;
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	len_prefix = i;
	return (len_prefix);
}

static int	ft_sufix_len(const char *s1, char const *set)
{
	size_t	len_s1;
	size_t	len_suffix;
	size_t	j;
	size_t	k;

	len_s1 = ft_strlen(s1);
	k = len_s1 - 1;
	while (k != 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[k] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		k--;
	}
	len_suffix = len_s1 - k - 1;
	return (len_suffix);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_str;
	size_t	i;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	len_str = ft_strlen(s1) - ft_prefix_len(s1, set) - ft_sufix_len(s1, set);
	ptr = (char *)malloc((len_str + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len_str)
	{
		ptr[i] = s1[i + ft_prefix_len(s1, set)];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char s1[] = "abcaacbI'm nahliabcbacab";
// 	char set[] = "abc";
// 	printf("%s\n", ft_strtrim(s1, set));

// 	char s2[] = "   Hello, World!   ";
// 	char set2[] = " ";
// 	printf("%s\n", ft_strtrim(s2, set2));

// 	char s3[] = "###OpenAI###";
// 	char set3[] = "#";
// 	printf("%s\n", ft_strtrim(s3, set3));

// 	char s4[] = "xyzHello, World!xyz";
// 	char set4[] = "xyz";
// 	printf("%s\n", ft_strtrim(s4, set4));

// 	char s5[] = "NoTrimHere";
// 	char set5[] = " ";
// 	printf("%s\n", ft_strtrim(s5, set5));

// 	return (0);
// }
