/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 10:44:33 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/28 11:01:12 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	nothing(unsigned int i, char c)
{
	if (i < 3)
		return (c);
	else
		return ('a');
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char	*sol;

	len = ft_strlen((char *)s);
	sol = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!sol)
		return (NULL);
	while (i < len)
	{
		sol[i] = f(i, s[i]);
		i++;
	}
	sol[len] = '\0';
	return (sol);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%s \n", ft_strmapi(argv[1], &nothing));
	return (0);
}
