/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_borders.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:15:31 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/12 10:40:02 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	ft_math_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

int	ft_math_max(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

int	ft_math_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
