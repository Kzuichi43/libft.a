/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 22:55:38 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/24 23:04:06 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
*/
void    *ft_memset(void *ptr, int x, size_t n)
{
        size_t          i;
        unsigned char           *p;


        i = 0;
        p = (unsigned char *)ptr;
        while (i < n)
        {
                p[i] = (char)x;
                i++;
        }
        return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_bzero(argv[1], atoi(argv[2]));
	printf("%d \n", argv[1][atoi(argv[2]) + 1]);
}*/
