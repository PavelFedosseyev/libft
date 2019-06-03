/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfedosse <pfedosse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:24:22 by pfedosse          #+#    #+#             */
/*   Updated: 2019/05/29 14:00:59 by pfedosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new;

	new = *alst;
	if (*alst != NULL && del != NULL)
	{
		while (*alst)
		{
			new = (*alst)->next;
			if ((*alst)->content != NULL)
				(*del)((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = new;
		}
	}
}
