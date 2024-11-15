/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:35 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/14 15:15:17 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main()
// {
// 	int i = 0;
// 	char str[9] = "abcdefgh";
// 	ft_bzero(&str, 9);
// 	while (i < 9)
// 	{
// 		if (str[i] == '\0')
// 			printf("0");
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return 0;
// }
