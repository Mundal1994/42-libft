/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:29:21 by molesen           #+#    #+#             */
/*   Updated: 2021/12/15 09:47:38 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	checks if int is hexidecimal	*/

int	ft_isxdigit(int ch)
{
	if (ft_isdigit(ch) == 1)
		return (1);
	if ((ch >= 65 && ch <= 70) || (ch >= 97 && ch <= 102))
		return (1);
	return (0);
}
