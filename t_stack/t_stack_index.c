/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 08:05:31 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/10 08:10:17 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

int	t_stack_index(t_stack *self, int index)
{
	if (index < 0)
		index = t_stack_size(self) + index;
	while (index != 0 && self)
	{
		self = self->next;
		index--;
	}
	return (self->data);
}

int	t_stack_index_of(t_stack *self, int key)
{
	int		index;

	index = 0;
	while (self)
	{
		if (self->data == key)
			return (index);
		index++;
		self = self->next;
	}
	return (-1);
}
