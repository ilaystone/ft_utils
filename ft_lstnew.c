/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:15:20 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/20 08:27:18 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

t_str	*ft_lstnew(char *content)
{
	t_str	*res;

	res = (t_str *)malloc(sizeof(t_str));
	if (!res)
		return (NULL);
	res->content = ft_strdup(content);
	res->next = NULL;
	return (res);
}
