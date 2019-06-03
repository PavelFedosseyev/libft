/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfedosse <pfedosse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:58:39 by pfedosse          #+#    #+#             */
/*   Updated: 2019/05/22 11:59:15 by pfedosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (s == NULL)
		return (NULL);
	new = malloc(sizeof(char) * (len + 1));
	if (new != NULL)
	{
		i = 0;
		while (i < len && s[i + start] != '\0')
		{
			new[i] = s[i + start];
			i += 1;
		}
		new[i] = '\0';
	}
	return (new);
}
