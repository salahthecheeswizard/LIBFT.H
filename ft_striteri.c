/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 04:13:42 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/16 15:50:03 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!f)
		return ;
	while (s && *s)
	{
		(*f)(i, s);
		s++;
		i++;
	}
}
