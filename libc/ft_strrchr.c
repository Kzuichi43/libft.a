/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 13:20:38 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/30 11:18:30 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int chr)
{
	int			len;

	len = ft_strlen(str) - 1;
	if ((char)c == '\0')
		return ((char *)&str[i]);
	while (len >= 0)
	{
		if (str[len] == ch)
			return ((char *)&str[len]);
		len--;
	}
	return (0);
}
