/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfedosse <pfedosse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:41:09 by pfedosse          #+#    #+#             */
/*   Updated: 2019/05/28 18:34:08 by pfedosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	l;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = i;
	i = ft_strlen(s) - 1;
	if (j <= i)
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i--;
	l = i - j + 1;
	return (j <= i ? ft_strsub(s, j, l) : ft_strdup(""));
}
