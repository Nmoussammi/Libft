/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:24:13 by nmoussam          #+#    #+#             */
/*   Updated: 2021/12/03 19:44:46 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static int	sizeof_words(char const	*word, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (word[i] == c)
		i++;
	while (word[i] != c && word[i] != '\0')
	{
		i++;
		size++;
	}
	return (size);
}

static int	ft_getindex(int i, char c, const char *s)
{
	while (s[i] == c)
		i++;
	return (i);
}

static char	**ft_free(int a, char **new)
{
	while (a > 0)
	{
		free(new[a]);
		a--;
	}
	free(new);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		a;
	int		i;
	int		b;
	char	**new;

	if (!s)
		return (NULL);
	new = (char **)malloc((nb_words(s, c) + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	a = 0;
	i = 0;
	while (a < nb_words(s, c))
	{
		b = 0;
		new[a] = malloc(sizeof_words(&s[i], c) + 1);
		if (!new[a])
			return (ft_free(a, new));
		i = ft_getindex(i, c, s);
		while (s[i] != c && s[i])
			new[a][b++] = s[i++];
		new[a++][b] = '\0';
	}
	new[a] = NULL;
	return (new);
}
