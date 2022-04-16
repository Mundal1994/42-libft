/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:51:17 by molesen           #+#    #+#             */
/*   Updated: 2021/11/04 12:43:41 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	applies the function f to each character of the string passed as
**	argument by giving its index as first argument to create a 'fresh' new
**	string (with malloc(3)) resulting from the successive applications of f.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dst;
	unsigned int	i;
	unsigned int	len;

	dst = NULL;
	if (s)
	{
		len = ft_strlen((char *)s);
		dst = (char *)malloc(sizeof(char) * len + 1);
		if (!dst)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			dst[i] = f(i, s[i]);
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}
