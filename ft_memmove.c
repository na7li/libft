/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:54 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 19:49:44 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d_ptr;
	const char	*s_ptr;
	size_t		i;

	d_ptr = (char *)dst;
	s_ptr = (const char *)src;
	i = 0;
	if (d_ptr < s_ptr)
	{
		while (i < len)
		{
			d_ptr[i] = s_ptr[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			d_ptr[len - 1] = s_ptr[len - 1];
			len--;
		}
	}
	return (dst);
}
