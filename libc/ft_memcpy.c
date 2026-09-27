/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 23:04:57 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/25 10:18:54 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

void	*ft_memcpy(void *to, const void *from, size_t numBytes)
{
	unsigned char	*p_from;
	size_t	i;

	p_from = (unsigned char *)from;
	i = 0;
	while (numBytes > i && from)
	{
		ft_memset(to, p_from[i], 1);
		to++;
		i++;
	}
	return (to);
}


int	main(void)
{
	char s[10] = {'b','a','r','c','e','l','o','n','a','\0'};
	char s2[10] = {'b','a','r','c','e','l','o','n','a','\0'};

	printf("or: %s\n", s);

	ft_memcpy((void *)&s[0], (const void *)&s[3], 5);
	printf("to the begginig: %s\n", s);

	memcpy((void *)&s2[3], (const void *)&s2[0], 5);
	printf("to the back: %s\n", s2);


	return (0);
}
/*
int main() {
    char str1[] = "Geeks";
    char str2[12] = "";

    // Copies contents of str1 to str2
    ft_memcpy(str2, str1, sizeof(str1));

    printf("str2 after memcpy:");
    printf("%s\n",str2);

    return 0;
}*/
