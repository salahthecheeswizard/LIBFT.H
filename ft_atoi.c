/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:04:20 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/06 10:47:50 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_out(unsigned long res, int sign)
{
	if (res >= 9223372036854775807 && sign == 1)
		return (-1);
	if (res > 9223372036854775807)
		return (0);
	return (2);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	result;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - '0';
		if (get_out(result, sign) != 2)
			return (get_out(result, sign));
		i++;
	}
	return (result * sign);
}
