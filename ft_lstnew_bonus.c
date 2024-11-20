/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:22:15 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/18 05:30:52 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ll;

	ll = malloc(sizeof(t_list));
	if (ll)
	{
		ll->content = content;
		ll->next = NULL;
	}
	return (ll);
}
