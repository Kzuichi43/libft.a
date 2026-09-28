/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 10:10:25 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/28 10:41:19 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	if (n != 0)
		len++;
	return (len);
}

void	ft_strcat(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	str[i] = c;
}

void	ft_num(char *nbr, int n)
{
	if (n >= 10)
		ft_num(nbr, n / 10);
	ft_strcat(nbr, n % 10 + '0');
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int	len;

	len = count_len(n);
	nbr = malloc(sizeof(char) * (len + 1));
	if (!nbr)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n *= -1;
		nbr[0] = '-';
		len--;
	}
	ft_num(nbr, n);
	nbr[len + 1] = '\0';
	return (nbr);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%s \n", ft_itoa(atoi(argv[1])));
	return (0);
}
