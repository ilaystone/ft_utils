/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 15:00:17 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 12:22:27 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	ft_atoi(const char *str)
{
	int				sign;
	long			res;

	sign = 1;
	res = 0;
	while (ft_isspace(*str) && *str)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str) && *str)
	{
		res = res * 10 + (unsigned int)(*str - '0');
		str++;
	}
	return (res * sign);
}
