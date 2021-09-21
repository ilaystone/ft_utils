/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 11:15:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/01 11:28:58 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

void	t_stack_add(t_stack **self, int data)
{
	t_stack		*new;
	t_stack		*iter;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->data = data;
	new->next = NULL;
	iter = *self;
	if (!iter)
		*self = new;
	else
	{
		while (iter->next)
		{
			iter = iter->next;
		}
		iter->next = new;
	}
}
