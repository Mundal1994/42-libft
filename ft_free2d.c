/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:55:42 by molesen           #+#    #+#             */
/*   Updated: 2021/11/24 11:21:05 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free2d(char **dest)
{
	size_t	str;

	str = 0;
	while (dest[str])
	{
		free(dest[str]);
		str++;
	}
	free(dest);
	dest = NULL;
	return (dest);
}
