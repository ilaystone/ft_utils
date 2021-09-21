/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:23:50 by ikhadem           #+#    #+#             */
/*   Updated: 2021/08/29 12:25:22 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

long	ft_atol(const char *str)
{
	int					sign;
	long long			res;

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
		res = res * 10 + (unsigned long)(*str - '0');
		str++;
	}
	return (res * sign);
}
