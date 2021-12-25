/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:01:21 by nmoussam          #+#    #+#             */
/*   Updated: 2021/12/03 19:28:29 by nmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_chr(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -1 * n;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	if (n <= 9)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		p;
	int		len ;

	nb = n;
	len = nbr_chr(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	p = 0;
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
		p = 1;
	}
	str[len] = '\0';
	while (--len >= p)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
