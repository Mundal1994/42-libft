/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 13:06:24 by molesen           #+#    #+#             */
/*   Updated: 2021/12/18 13:06:28 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	
**	checks if char is a white-space character
**	white-space char includes: space, form-feed('\f'), newline('\n'), 
**	carriage return('\r'), horizontal tab('\t') and vertical tab('\v').
*/

int	ft_isspace(int ch)
{
	if (ch == ' ' || (ch >= 9 && ch <= 13))
		return (1);
	return (0);
}
