/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:50:19 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/15 17:45:44 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*ptr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char f(unsigned int i, char c)
// {
// 	i = 0;
// 	c -= 32;
// 	return (c);
// }
// int main()
// {
// 	char s[] = "hello";
// 	char (*p)(unsigned int, char)= f;
// 	printf("%s", ft_strmapi(s, p));
// }

// char	lowercase_wrapper(unsigned int i, char c)
// {
// 	(void)i;
// 	return (ft_tolower(c));
// }
//
// int	main(void) {
// 	char	*str;
// 	char	*result;
//
// 	*str = "HELLO, WORLD!";
// 	*result = ft_strmapi(str, lowercase_wrapper);
// 	if (result)
// 	{
// 		printf("Original string: %s\n", str);
// 		printf("Transformed string: %s\n", result);
// 		free(result); // free up the memory
// 	}
// 	else
// 		printf("Memory allocation failed!\n");
// 	return (0);
// }