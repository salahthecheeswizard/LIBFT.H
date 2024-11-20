/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 04:12:42 by sabadri           #+#    #+#             */
/*   Updated: 2024/10/28 04:31:12 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*alloc(int len)
{
	char	*p;

	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	p[0] = 0;
	return (p);
}

static int	ilen(long c)
{
	int	i;

	i = 0;
	if (c < 0)
	{
		c *= -1;
		i++;
	}
	if (c == 0)
		i++;
	while (c != 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	c;
	int		len;
	char	*p;
	int		i;

	c = n;
	len = ilen(c);
	p = alloc(len);
	if (!p)
		return (NULL);
	if (n < 0)
		c *= -1;
	i = len - 1;
	while (c > 0)
	{
		p[i] = (c % 10) + '0';
		c = c / 10;
		i--;
	}
	if (n < 0)
		p[0] = '-';
	else if (n == 0)
		p[0] = '0';
	p[len] = '\0';
	return (p);
}
