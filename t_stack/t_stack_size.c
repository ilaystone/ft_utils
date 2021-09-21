/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 07:55:49 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/12 10:50:41 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

size_t	t_stack_size(t_stack *self)
{
	size_t		size;

	size = 0;
	while (self)
	{
		size++;
		self = self->next;
	}
	return (size);
}
