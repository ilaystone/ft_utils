/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_display.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:24:41 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/12 10:49:00 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_stack.h"

static void	ft_putchar(int c)
{
	write(1, &c, 1);
}

static void	ft_putnbr(int n)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar('-');
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

void	t_stack_display(t_stack	*self)
{
	ft_putchar('*');
	ft_putchar('*');
	ft_putchar('*');
	ft_putchar('\n');
	while (self)
	{
		ft_putnbr(self->data);
		ft_putchar('\n');
		self = self->next;
	}
	ft_putchar('*');
	ft_putchar('*');
	ft_putchar('*');
	ft_putchar('\n');
}
