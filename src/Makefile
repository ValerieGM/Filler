# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/29 10:25:29 by vgongora          #+#    #+#              #
#    Updated: 2020/07/20 11:53:53 by vgongora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler

FLAGS = -Wall -Werror -Wextra

SRC = read.c \
	  trim.c \
	  check.c \
	  solve.c \
	  place.c \
	  main.c \

DIR = ../libft/src

all: $(NAME)
$(NAME):
	make all -C $(DIR)
	gcc $(FLAGS) -o $(NAME) $(SRC) ./libft/src/libft.a

clean:
	make clean -C $(DIR)
	rm -rf $(NAME)

fclean: clean
	make fclean -C $(DIR)
	rm -rf $(NAME)

re:	fclean all

.PHONY:	clean fclean all re
