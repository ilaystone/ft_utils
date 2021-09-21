/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_has_duplicates.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 08:59:47 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/17 16:57:17 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

int	t_stack_has_duplicates(t_stack *self)
{
	t_stack		*i;
	t_stack		*j;

	i = self;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (i->data == j->data)
				return (1);
			j = j->next;
		}
		i = i->next;
	}
	return (0);
}
