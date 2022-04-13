/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:50:49 by molesen           #+#    #+#             */
/*   Updated: 2021/11/23 10:46:28 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	
**	copies n bytes from memory area src to memory area dst
**	memory areas must not overlap. Use ft_memmove if they do
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	if (!dst && !src && n > 0)
		return (dst);
	if (n > 0)
	{
		while (n--)
			*dst_ptr++ = *src_ptr++;
	}
	return (dst);
}
