/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:00:54 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/16 21:11:32 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	if (count && size > (18446744073709551615ULL / count))
		return (NULL);
	array = malloc(count * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, count * size);
	return (array);
}
