/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:24:27 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/17 19:59:42 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
int main()
{
	close(5);
	char str[] = "How are you\n";
	int fd = open("text.txt", O_CREAT | O_RDWR, 0777);
	int fdd = open("ggg.txt", O_CREAT | O_RDWR, 0777);
	int fdg = open("fff.txt", O_CREAT | O_RDWR, 0777);
	write(fd, "HELLO\n", 7);
	ft_putstr_fd(str,fd);
	printf("File's FD is: %d\n", fd);
	printf("File's FD is: %d\n", fdd);
	printf("File's FD is: %d\n", fdg);
}