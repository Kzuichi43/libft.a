/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 11:35:17 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/30 12:02:52 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(const char *nbr)
{
	int	res;
	int	i;
	int	c;

	res = 0;
	i = 0;
	c = 1;
	while (nbr[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (nbr[i] == '-')
	{
		c = -1;
		i++;
	}
	while (nbr[i] >= '0' && nbr[i] <= '9')
	{
		res *= 10;
		res += nbr[i] - '0';
		i++;
	}
	return (c * res);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%d \n", ft_atoi(argv[1]));
	return (0);
}*/
