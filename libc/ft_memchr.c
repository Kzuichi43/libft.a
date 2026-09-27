/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 12:20:35 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/26 12:28:23 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t	i;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
			return (&a[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	printf("%s \n", (char *)ft_memchr(argv[1], argv[2][0], (size_t)strlen(argv[1])));
	return (0);
}
