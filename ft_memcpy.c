/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 04:12:58 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/16 16:09:12 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpsrc;
	unsigned char	*tmpdst;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	tmpsrc = (unsigned char *)src;
	tmpdst = (unsigned char *)dst;
	while (n > 0)
	{
		*tmpdst++ = *tmpsrc++;
		n--;
	}
	return (dst);
}
