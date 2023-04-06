/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:07:32 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/06 23:53:59 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	char	a = 'a';
	int fd = open("./a.c", O_WRONLY);
	printf("%d\n", fd);
	ft_putchar_fd('a', fd);
	int fd2 = open("./ft_bzero.c", O_WRONLY);
	printf("%d\n", fd2);
	//printf("%c\n", ft_putchar_fd(a, 0));
	//printf("%c\n", ft_putchar_fd(a, 1));
	//printf("%c\n", ft_putchar_fd(a, 2));
	//printf("%c\n", ft_putchar_fd(a, 3));
	//printf("%c\n", ft_putchar_fd(a, -1));
	//printf("%c\n", ft_putchar_fd(a, 2147483647));
	//printf("%c\n", ft_putchar_fd(a, -2147483648));
	printf("fd == 0\n");
	ft_putchar_fd(a, 0);
	printf("\n");
	printf("fd == 1\n");
	ft_putchar_fd(a, 1);
	printf("\n");
	printf("fd == 2\n");
	ft_putchar_fd(a, 2);
	printf("\n");
	printf("fd == 3\n");
	ft_putchar_fd(a, 3);
	printf("\n");
	printf("fd == -1\n");
	ft_putchar_fd(a, -1);
	printf("\n");
	printf("fd == int max\n");
	ft_putchar_fd(a, 2147483647);
	printf("\n");
	printf("fd == int min\n");
	ft_putchar_fd(a, -2147483648);
	printf("\n");
}