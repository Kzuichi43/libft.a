/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:03:47 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/28 11:07:42 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(unsigned int i, char *str)
{
	printf("%c\n", str[i]);
}
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_striteri(argv[1], &ft_putchar);
	return (0);
}
