/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 10:22:56 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/25 10:47:41 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned char	*t;
	unsigned char	*f;
	size_t	i;

	i = 0;
	t = (unsigned char *)to;
	f = (unsigned char *)from;
	if (t > f)
	{
		while (numBytes > 0)
		{
			t[numBytes - 1] = f[numBytes - 1];
			numBytes--;
		}
	}
	else if (f > t)
	{
		while (numBytes > i)
		{
			ft_memset(t, f[i], 1);
			t++;
			i++;
		}
	}
	return (t);
}

int     main(void)
{
        char s[10] = {'b','a','r','c','e','l','o','n','a','\0'};
        char s2[10] = {'b','a','r','c','e','l','o','n','a','\0'};

        printf("or: %s\n", s);

        ft_memmove((void *)&s[0], (const void *)&s[3], 5);
        printf("to the begginig: %s\n", s);

        ft_memmove((void *)&s2[3], (const void *)&s2[0], 5);
        printf("to the back: %s\n", s2);


        return (0);
}

