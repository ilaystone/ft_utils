/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:59:04 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/16 15:37:42 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_STACK_H
# define T_STACK_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}				t_stack;

t_stack		*t_stack_init(t_stack **self);
t_stack		*t_stack_push(t_stack **self, int data);
t_stack		*t_stack_pop(t_stack **self);
t_stack		*t_stack_copy(t_stack *self);
size_t		t_stack_size(t_stack *self);
int			t_stack_index_of(t_stack *self, int key);
int			t_stack_top(t_stack **self);
int			t_stack_index(t_stack *self, int index);
int			t_stack_max(t_stack *self);
int			t_stack_min(t_stack *self);
int			t_stack_is_sorted(t_stack *self);
int			t_stack_has_duplicates(t_stack *self);
void		t_stack_destory(t_stack **self);
void		t_stack_display(t_stack	*self);
void		t_stack_sort(t_stack **self);
void		t_stack_add(t_stack **self, int data);
void		t_stack_remove_at(t_stack **self, size_t index);

#endif