/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:25:50 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/20 08:37:43 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

static int	fill_line(t_str **data, char **line, int i, int j)
{
	char	*res;
	char	*h;
	int		size;

	size = str_length(*data);
	res = (char *)malloc(size + 1);
	res[size] = '\0';
	while (*data)
	{
		i = 0;
		while ((*data)->content[i] != '\0' && (*data)->content[i] != '\n')
			res[j++] = (*data)->content[i++];
		if ((*data)->content[i] == '\0')
			free_node(data);
		else
		{
			h = (*data)->content;
			(*data)->content = ft_strdup(h + i + 1);
			free(h);
			*line = res;
			return (1);
		}
	}
	*line = res;
	return (0);
}

int	get_next_line(char **line)
{
	static t_str	*data = NULL;
	char			str[129];
	int				c;

	c = 0;
	if (lst_strchr(data, '\n') != 1)
	{
		c = read(0, str, 128);
		while (c)
		{
			str[c] = '\0';
			ft_lstaddback(&data, str);
			if (ft_strchr(str, '\n') == 1)
				break ;
			c = read(0, str, 128);
		}
	}
	if (c == -1 || !line)
		return (-1);
	if (c == 0 && data == NULL)
	{
		*line = ft_strdup("");
		return (0);
	}
	return (fill_line(&data, line, 0, 0));
}
