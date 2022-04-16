/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:08:40 by molesen           #+#    #+#             */
/*   Updated: 2021/11/01 12:11:39 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	if the argument ch is an uppercase letter, the result shall be the
**	corresponding lowercase letter
*/

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
		return (ch + 32);
	return (ch);
}
