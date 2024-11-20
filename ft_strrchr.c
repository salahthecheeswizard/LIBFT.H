/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 04:29:45 by sabadri           #+#    #+#             */
/*   Updated: 2024/10/31 11:20:56 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*f;

	i = 0;
	f = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			f = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
	{
		f = (char *)&s[i];
		return (f);
	}
	return (f);
}
