/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:08:35 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/17 16:26:08 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	s = (const char *)src;
	d = (char *)dst;
	if (!d && !s)
		return (NULL);
	if (dst == src)
		return (dst);
	if (s < d)
	{
		d += len - 1;
		s += len - 1;
		while (len--)
			*(d--) = *(s--);
	}
	else
	{
		while (len--)
			*(d++) = *(s++);
	}
	return (dst);
}
