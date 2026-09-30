/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 19:08:00 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/30 11:23:54 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (big == 0 || little == 0 || len == 0)
		return (0);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (little[j] == big[i])
		{
			while (i + j < len && little[j] == big[i + j])
				j++;
			if (little[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
int	main(int argc, char **argv)
	if (argc < 3)
	if (argc < 3)
		return (0);
	if (ft_strnstr(argv[1], argv[2], 1) == 0)
		printf("ADIOS\n");
	else
		printf("%s\n", ft_strnstr(argv[1], argv[2], 1));
	return (0);
*/
