/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_remove_at.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:16:48 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/12 10:50:34 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

void	t_stack_remove_at(t_stack **self, size_t index)
{
	t_stack		*iter;
	t_stack		*holder;

	if (t_stack_size(*self) > index)
	{
		if (index == 0)
		{
			holder = *self;
			*self = (*self)->next;
		}
		else
		{
			iter = *self;
			index--;
			while (index != 0 && iter)
			{
				iter = iter->next;
				index--;
			}
			holder = iter->next;
			iter->next = iter->next->next;
		}
		free(holder);
	}
}
