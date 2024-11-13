/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:22:21 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 12:25:53 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lencalcul(int n)
{
	size_t	len;

	len = 1;
	if (n / 10 == 0)
		return (1);
	while (n / 10 != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_allocation(size_t len)
{
	char	*str;

	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	return (str);
}

static char	*ft_convcopy(char *str, int n, size_t len, int sign)
{
	int	i;

	i = len;
	str[i] = '\0';
	while (i >= 0)
	{
		str[i - 1] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	if (sign < 0)
		str[i + 1] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int	sign;
	size_t	len;
	char	*str;

	sign = 1;
	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	if (n < 0)
	{
		sign *= -1;
		n *= -1;
	}
	len = ft_lencalcul(n);
	if (sign < 0)
		len += 1;
	str = ft_allocation(len);
	str = ft_convcopy(str, n, len, sign);
	return (str);
}

// int main()
// {
//     int n = -2147483648;
//     printf("%s\n", ft_itoa(n));
//     return 0;
// }