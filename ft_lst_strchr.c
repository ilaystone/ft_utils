/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_strchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:19:26 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/20 08:20:54 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	lst_strchr(t_str *lst, char c)
{
	while (lst)
	{
		if (ft_strchr(lst->content, c) == 1)
			return (1);
		lst = lst->next;
	}
	return (0);
}
