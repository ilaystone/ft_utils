/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 13:22:35 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/01 14:26:56 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

void	t_stack_sort(t_stack **self)
{
	t_stack		*iter;
	int			holder;

	iter = *self;
	while (iter->next)
	{
		if (iter->data > iter->next->data)
		{
			holder = iter->data;
			iter->data = iter->next->data;
			iter->next->data = holder;
			iter = *self;
		}
		else
			iter = iter->next;
	}
}
