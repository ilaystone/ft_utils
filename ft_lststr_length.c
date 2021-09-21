/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststr_length.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:18:18 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/20 08:27:46 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	str_length(t_str *lst)
{
	int		i;
	int		total;

	i = 0;
	total = 0;
	while (lst)
	{
		i = 0;
		while (lst->content[i] != '\0' && lst->content[i] != '\n')
			i++;
		total += i;
		if (lst->content[i] == '\n')
			return (total);
		else
			lst = lst->next;
	}
	return (total);
}
