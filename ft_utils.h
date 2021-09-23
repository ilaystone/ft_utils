/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:58:56 by ikhadem           #+#    #+#             */
/*   Updated: 2021/09/23 10:30:22 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_str
{
	char			*content;
	struct s_str	*next;
}	t_str;

int		ft_atoi(const char *str);
int		ft_putchar_fd(int fd, int c);
int		ft_isdigit(int c);
int		ft_strisdigit(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_isspace(int c);
size_t	ft_putstr_fd(int fd, const char *str);
long	ft_atol(const char *str);
size_t	ft_strlen(const char *str);
void	ft_putnbr(int n);
int		ft_math_abs(int nbr);
int		ft_math_max(int a, int b);
int		ft_math_min(int a, int b);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t len);
char	**ft_split(char const *s, char c);
void	ft_bzero(void *dest, size_t len);
int		get_next_line(char **line);
char	*ft_strdup(char *str);
t_str	*ft_lstnew(char *content);
int		ft_strchr(char *str, char c);
int		lst_strchr(t_str *lst, char c);
void	ft_lstaddback(t_str **lst, char *n);
void	free_node(t_str **data);
t_str	*ft_lstnew(char *content);
int		str_length(t_str *lst);
int		ft_strchr(char *str, char c);
int		get_next_line(char **line);
char	*ft_straddc(char *str, char c);

#endif