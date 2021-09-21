/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_destroy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:17:43 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/12 10:48:17 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

void	t_stack_destory(t_stack **self)
{
	t_stack		*holder;
	t_stack		*iter;

	iter = *self;
	while (iter != NULL)
	{
		holder = iter;
		iter = (iter->next);
		free(holder);
	}
	*self = NULL;
}
