/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:46:23 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/16 08:52:52 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_samechar(const char s1, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_str(int i, int j, const char *s1)
{
	char	*str;
	int		k;

	str = malloc(sizeof(char) * (j - i + 2));
	if (!str)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	i = 0;
	while (s1[i] && ft_samechar(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_samechar(s1[j], set))
		j--;
	return (ft_str(i, j, s1));
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
