/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:05:13 by molesen           #+#    #+#             */
/*   Updated: 2021/11/16 12:52:01 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	allocates (with malloc(3)) and returns a 'fresh' substring from the
**	string given as argument. The substring begins at index start and is of
**	size len. If start and len aren't referencing to a valid substring the
**	behaviour is undefined. If the allocation fails the function returns NULL
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*pnt;

	if (!s)
		return (NULL);
	pnt = (char *)malloc(sizeof(char) * (len + 1));
	if (!pnt)
		return (NULL);
	if (start + len > ft_strlen(s))
	{
		ft_strcpy(pnt, "");
		return (pnt);
	}
	ft_strncpy(pnt, &s[start], len);
	pnt[len] = '\0';
	return (pnt);
}
