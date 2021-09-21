# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 08:08:34 by ikhadem           #+#    #+#              #
#    Updated: 2021/09/16 17:47:15 by ikhadem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libstack.a

SRC :=	t_stack_destroy.c \
		t_stack_display.c \
		t_stack_index.c \
		t_stack_init.c \
		t_stack_pop.c \
		t_stack_push.c \
		t_stack_size.c \
		t_stack_top.c \
		t_stack_sort.c \
		t_stack_is_sorted.c \
		t_stack_copy.c \
		t_stack_borders.c \
		t_stack_add.c \
		t_stack_remove_at.c \
		t_stack_has_duplicates.c \

OBJ := $(SRC:.c=.o)

CC = gcc
FLAG = -Wextra -Werror -Wall
HDR = t_stack.h
INCLUDE = -I.

%.o : %.c $(HDR)
	$(CC) $(FLAG) $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re