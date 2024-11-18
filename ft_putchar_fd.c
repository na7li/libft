/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:53:09 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/17 18:29:05 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h> //open

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main()
{
	close(0);
	int fd = open("text.txt", O_RDWR | O_CREAT, 0700);
	ft_putchar_fd('a', fd);
	printf("\nhello file ifd is: %d", fd);
}