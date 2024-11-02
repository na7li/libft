/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:21:27 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/02 13:27:14 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    size_t i = 0;
    int val = 1;
    unsigned long long num = 0;
    
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            val = val * -1;
        i++;
    }
    
    while (str[i] >= '0' && str[i] <= '9')
        {
            num = num * 10 + (str[i] - '0');
            if(num > LLONG_MAX && val == 1)
                return -1;
            if(num > LLONG_MAX && val == -1)
                return 0;          
            i++;
        }
    return ((num * val));   // return ((int)(num * val));
}

// int main()
// {
//     printf("%i\n", ft_atoi("999999999999999999453513k"));
//     printf("%i\n", atoi("999999999999999999453513k"));
// //     printf("%i\n", atoi("   +123dfg"));
// //     printf("%i\n", atoi("   -1235er"));
// //     printf("%i\n", atoi("   --123ert"));
// //     printf("%i\n", atoi("   -+123dfg"));
// //     printf("%i\n", atoi("   ++123erg"));
// //     printf("%i\n", atoi("   -s123fgh"));
// //     printf("%i\n", atoi("   sdf123rth"));
// //     printf("%i\n", atoi(" d  123rth"));
// }