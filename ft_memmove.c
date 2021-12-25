/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:18:55 by nmoussam          #+#    #+#             */
/*   Updated: 2021/12/03 18:43:10 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*psrc;
	unsigned char	*pdst;

	if (src == dst)
	{
		return (dst);
	}
	else if (src > dst)
	{
		return (ft_memcpy(dst, src, len));
	}
	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;
	while (len--)
	{
		pdst[len] = psrc[len];
	}
	return (dst);
}
