/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_pop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 07:59:52 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/12 10:49:58 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

t_stack	*t_stack_pop(t_stack **self)
{
	t_stack		*iter;

	iter = *self;
	*self = (*self)->next;
	return (iter);
}
