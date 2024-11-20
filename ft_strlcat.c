/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:11:15 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/16 21:09:40 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	cpy_len;

	src_len = ft_strlen(src);
	if (!dstsize && !dst)
		return (src_len);
	dst_len = ft_strlen(dst);
	cpy_len = dstsize - dst_len - 1;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	if (cpy_len > src_len)
		cpy_len = src_len;
	ft_memcpy(dst + dst_len, src, cpy_len);
	dst[cpy_len + dst_len] = '\0';
	return (dst_len + src_len);
}
