/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:28:48 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/16 19:14:18 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ll;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		ll = *lst;
		while (ll->next)
			ll = ll->next;
		ll->next = new;
	}
}
