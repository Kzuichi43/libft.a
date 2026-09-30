/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:12:39 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/29 11:26:42 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(int argc, char **argv)
{
	int	fd;

	if (argc < 2)
		return (0);
	fd = open(argv[1], O_RDONLY || O_WRONLY);
	ft_putchar_fd('a', fd);
	fd = close(fd);
	return (0);
}*/
