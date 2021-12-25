/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:43:44 by nmoussam          #+#    #+#             */
/*   Updated: 2021/12/03 21:42:51 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*pchr;
	int		len;

	ch = (char)c;
	pchr = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (pchr[len] == ch)
		{
			return (pchr + len);
		}
		len--;
	}
	return (NULL);
}
