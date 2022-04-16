/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_stop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:07:40 by molesen           #+#    #+#             */
/*   Updated: 2021/11/17 15:08:14 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	calculates the length of a string excluding the terminating null byte
**	or length until char c
*/

int	ft_strlen_stop(char *str, char c)
{
	int		len;

	len = 0;
	while (str[len] != '\0' && str[len] != c)
		len++;
	return (len);
}
