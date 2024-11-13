/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:35 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 12:32:20 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			ptr[i] = 0;
			i++;
		}
	}
}
/*
int main()
{

	char str[8] = "abcd";

	ft_bzero(str, 2); // Sets all characters to zero
	printf("Result after ft_bzero: ");

	// Print each character to show the effect of zeroing out the string
	for (int i = 0; i < 8; i++)
	{
		if (str[i] == '\0')
			printf("\\0 "); // Print null bytes as \0 for clarity
		else
			printf("%c ", str[i]);
	}
	printf("\n");

	return 0;
}
*/