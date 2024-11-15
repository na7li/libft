/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:21:27 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/14 20:42:50 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					val;
	unsigned long long	num;

	i = 0;
	val = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			val = val * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (val == 1 && num > LLONG_MAX)
			return (-1);
		if (val == -1 && num > LLONG_MAX)
			return (0);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(num * val));
}

// int main()
// {
// 	printf("%i\n", ft_atoi("abc"));
// 	printf("%i\n", atoi("abc"));
// 	printf("%i\n", ft_atoi("LLONG_MAX"));
// 	printf("%i\n", atoi("LLONG_MAX"));
//     printf("%i\n", ft_atoi("   +123dfg"));
//     printf("%i\n", ft_atoi("   -1235er"));
//     printf("%i\n", ft_atoi("   --123ert"));
//     printf("%i\n", ft_atoi("   -+123dfg"));
//     printf("%i\n", ft_atoi("   ++123erg"));
//     printf("%i\n", ft_atoi("   -s123fgh"));
//     printf("%i\n", ft_atoi("   sdf123rth"));
//     printf("%i\n", ft_atoi(" d  123rth"));
// }