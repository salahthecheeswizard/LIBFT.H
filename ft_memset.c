/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 04:13:09 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/17 00:12:14 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *)b;
	if (b == NULL)
		return (NULL);
	if (len == 0)
		return (b);
	while (len > 0)
	{
		*s = (unsigned char)c;
		s++;
		len--;
	}
	return (b);
}
