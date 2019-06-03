/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfedosse <pfedosse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 19:57:43 by pfedosse          #+#    #+#             */
/*   Updated: 2019/05/28 18:05:45 by pfedosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *new;

	new = dest;
	if (n == 0)
		return (dest);
	while (*new)
	{
		new++;
	}
	while (*src && n > 0)
	{
		*new++ = *src++;
		n--;
	}
	*new = '\0';
	return (dest);
}
