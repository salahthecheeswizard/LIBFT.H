/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 05:50:29 by sabadri           #+#    #+#             */
/*   Updated: 2024/10/24 23:28:05 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ll;

	ll = lst;
	if (ll == NULL)
		return (NULL);
	while (ll->next)
	{
		ll = ll->next;
	}
	return (ll);
}
