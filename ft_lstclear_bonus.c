/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:50:26 by sabadri           #+#    #+#             */
/*   Updated: 2024/11/16 21:04:35 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ll;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		ll = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = ll;
	}
}
