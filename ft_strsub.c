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

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*pnt;
	size_t	i;

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
	i = 0;
	while (i < len)
	{
		pnt[i] = s[start];
		start++;
		i++;
	}
	pnt[i] = '\0';
	return (pnt);
}
