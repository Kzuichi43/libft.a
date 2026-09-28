/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:30:33 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/28 11:31:44 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void    ft_putchar_fd(int fd, char c)
{
        write(fd, &c, 1);
}

void    ft_putstr_fd(char *s, int fd)
{
        int     i;

        i = 0;
        while (s[i] != '\0')
                ft_putchar_fd(fd, s[i++]);
	write(fd, "\n", 1);
}

int     main(int argc, char **argv)
{
        int     fd;

        if (argc < 3)
                return (0);
        fd = open(argv[1], O_RDONLY || O_WRONLY);
        ft_putstr_fd(argv[2], fd);
        close(fd);
        return (0);
}      
