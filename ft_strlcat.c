/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:46:14 by nmoussam          #+#    #+#             */
/*   Updated: 2021/12/03 19:58:55 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	i = 0;
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (!dstsize)
		return (lsrc);
	else if (dstsize <= ldst)
		return (dstsize + lsrc);
	else
	{
		while (src[i] && i < dstsize - ldst - 1)
		{
			dst[ldst + i] = src[i];
			i++;
		}
		dst[ldst + i] = '\0';
	}
	return (lsrc + ldst);
}
