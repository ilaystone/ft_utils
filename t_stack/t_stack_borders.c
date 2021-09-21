/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_borders.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:33:53 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/01 10:36:57 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

int	t_stack_max(t_stack *self)
{
	int		max;

	max = self->data;
	while (self)
	{
		if (self->data > max)
			max = self->data;
		self = self->next;
	}
	return (max);
}

int	t_stack_min(t_stack *self)
{
	int		min;

	min = self->data;
	while (self)
	{
		if (self->data < min)
			min = self ->data;
		self = self->next;
	}
	return (min);
}
