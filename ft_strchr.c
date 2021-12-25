/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:54:20 by nmoussam          #+#    #+#             */
/*   Updated: 2021/12/03 18:52:19 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*pchr;

	pchr = (char *)s;
	ch = (char)c;
	while (*pchr != '\0')
	{
		if (*pchr == ch)
			return (pchr);
		pchr++;
	}
	if (*pchr == ch)
		return (pchr);
	return (NULL);
}
