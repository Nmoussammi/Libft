/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:59:03 by nmoussam          #+#    #+#             */
/*   Updated: 2021/12/03 19:13:37 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	j;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		new = malloc(sizeof(char));
		if (!new)
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	new = (char *)malloc(len + 1);
	if (!new)
		return (new);
	j = 0;
	while (j < len)
		new[j++] = s[start++];
	new[j] = '\0';
	return (new);
}
