/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 04:13:17 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/09 16:18:21 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	if (fd > -1 && str)
	{
		i = 0;
		while (str[i])
		{
			write(fd, &str[i], 1);
			i++;
		}
		write(fd, "\n", 1);
	}
	return ;
}
