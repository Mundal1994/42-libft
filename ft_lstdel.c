/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:14:07 by molesen           #+#    #+#             */
/*   Updated: 2021/11/17 17:29:44 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	
**	takes address of a pointer to a link and frees the memory of this
**	link and every successors of that link using functions del and free
**	the link that was freed must be set to NULL
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next_lst;

	while (*alst)
	{
		next_lst = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		(*alst) = next_lst;
	}
	*alst = NULL;
}
