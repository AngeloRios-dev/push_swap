# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/04 12:21:04 by angrios           #+#    #+#              #
#    Updated: 2025/11/21 19:39:18 by angrios          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

LIBFT	= ./libft/libft.a
OBJ_DIR	= obj
SRC_DIR	= .

SRC		= list_utils.c \
			swap.c \
			push_swap.c

OBJ		= $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(LIBFT) $(OBJ_DIR) $(NAME)

$(LIBFT):
	@$(MAKE) -C libft --no-print-directory
	
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	$(LOADING_COMP_BAR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -I. -Ilibft -c $< -o $@

clean:
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C libft fclean --no-print-directory

re: fclean all

.PHONY: all clean fclean re test