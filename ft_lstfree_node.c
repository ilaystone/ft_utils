/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:18:54 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/20 08:27:12 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

void	free_node(t_str **data)
{
	t_str	*tmp;

	tmp = *data;
	if (tmp)
	{
		*data = (*data)->next;
		free(tmp->content);
		free(tmp);
	}
}
