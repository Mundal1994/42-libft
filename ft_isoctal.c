/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isoctal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:51:50 by molesen           #+#    #+#             */
/*   Updated: 2021/12/15 10:05:10 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	checks if number is octal	*/

int	ft_isoctal(long nbr)
{
	while (nbr)
	{
		if ((nbr % 10) >= 8)
			return (0);
		else
			nbr = nbr / 10;
	}
	return (1);
}
