# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 11:00:08 by ikhadem           #+#    #+#              #
#    Updated: 2021/09/24 10:13:58 by ikhadem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN		=	\e[38;5;118m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]

NAME := libutils.a

SRC :=	ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_isdigit.c \
		ft_isspace.c \
		ft_strisdigit.c \
		ft_strcmp.c \
		ft_atoi.c \
		ft_atol.c \
		ft_strlen.c \
		ft_putnbr.c \
		ft_math_borders.c \
		ft_memcpy.c \
		ft_strlcpy.c \
		ft_strsplit.c \
		ft_bzero.c \
		get_next_line.c \
		ft_lst_strchr.c \
		ft_lstaddback.c \
		ft_lstfree_node.c \
		ft_lstnew.c \
		ft_lststr_length.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_straddc.c \

OBJ :=	$(SRC:.c=.o)

CC = gcc
FLAG = -Wall -Werror -Wextra
HDR = ft_utils.h
INCLUDE = -I.

%.o : %.c $(HDR)
	@$(CC) $(FLAG) $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJ)
	@cd t_stack/ && make
	@mv t_stack/libstack.a $(NAME)
	@ar rcs $(NAME) $(OBJ)
	@printf "$(_SUCCESS) $(NAME) is ready!.\n"

clean :
	@cd ./t_stack/ && make clean
	@rm -f $(OBJ)
	@printf "$(_SUCCESS) $(NAME)_objects removed!.\n"

fclean : clean
	@cd ./t_stack/ && make fclean
	@rm -f $(NAME)
	@printf "$(_SUCCESS) $(NAME)_lib removed!.\n"

re : fclean all

.PHONY : all clean fclean re