/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:17:38 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/20 08:27:04 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

void	ft_lstaddback(t_str **lst, char *n)
{
	t_str	*last;
	t_str	*new;

	new = ft_lstnew(n);
	last = *lst;
	if (last == NULL)
		*lst = new;
	else
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
}
