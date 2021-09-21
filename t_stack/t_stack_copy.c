/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 13:45:06 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/12 10:47:14 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

t_stack	*t_stack_copy(t_stack *self)
{
	t_stack		*copy;
	size_t		size;

	t_stack_init(&copy);
	size = t_stack_size(self);
	while (size--)
		t_stack_push(&copy, t_stack_index(self, size));
	return (copy);
}
