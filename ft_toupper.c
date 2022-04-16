/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:13:38 by molesen           #+#    #+#             */
/*   Updated: 2021/11/18 12:49:33 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	if the argument ch is an lowercase letter, the result shall be the
**	corresponding uppercase letter
*/

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		return (ch - 32);
	return (ch);
}
