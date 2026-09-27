/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 13:20:38 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/26 12:20:16 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int chr)
{
	int	len;
	char	*s;

	s = (char *)str
	len = ft_strlen(str) - 1;
	while (len >= 0)
	{
		if (str[len] == ch)
			return (&s[len]);
		len--;
	}
	return (0)
}
