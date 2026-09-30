/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:54:34 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/30 11:45:44 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

static int	ft_strlen(char const *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

static int	count_words(char const *s1, char c)
{
	int	i;
	int	res;

	i = 0;
	res = i;
	while (s1[i] != '\0')
	{
		if (s1[i] != c && (s1[i + 1] == '\0' || s1[i + 1] == c))
			res++;
		i++;
	}
	return (res);
}

static char	*ft_strndup(const char *s, int n)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(n * (sizeof(char) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0' && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	int		start;
	int		end;
	char	**res;

	len = count_words(s, c);
	res = malloc(sizeof(char *) * (len + 1));
	if (!res)
		return (NULL);
	end = 0;
	i = 0;
	while (s[end] != '\0' && i < len)
	{
		start = end;
		while (s[end] != c)
			end++;
		if (end > start)
			res[i++] = ft_strndup(&s[start], end - start);
		end++;
	}
	res[i] = malloc(1);
	res[i] = NULL;
	return (res);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	char 	**dict;
	dict = ft_split(argv[1], argv[2][0]);
	int	i = 0;
	while (dict[i])
	{
		printf("%s \n", dict[i]);
		free(dict[i]);
		i++;
	}
	free(dict);
}*/
