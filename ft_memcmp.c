/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 04:12:53 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/17 16:23:57 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s69;
	unsigned char	*s420;

	s69 = (unsigned char *)s1;
	s420 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s69[i] != s420[i])
			return (s69[i] - s420[i]);
		i++;
	}
	return (0);
}
