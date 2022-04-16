/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:39:08 by molesen           #+#    #+#             */
/*   Updated: 2021/11/02 10:56:28 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	locates the last occurence of c in the string pointed to by str
**	terminating null character is considered to be part of the string
*/

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		pos;

	i = 0;
	pos = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			pos = i;
			pos++;
		}
		i++;
	}
	if (str[i] == c)
	{
		pos = i++;
		pos++;
	}
	if (pos == -1)
		return (NULL);
	return ((char *)&str[pos - 1]);
}
