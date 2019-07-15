# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anjansse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/28 21:57:22 by anjansse          #+#    #+#              #
#    Updated: 2019/06/22 09:18:14 by anjansse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Pony
GENERAL		= main.cpp pony.cpp

SRCS		= $(GENERAL)

INCLUDES	= -I Pony.hpp

CC		= clang++

CFLAGS		= -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@echo -n 'Compiling Program...'
	@$(CC) $(CFLAGS) $(SRCS) $(INCLUDES) -o $(NAME)
	@echo "\t\x1b[92m✓✓\x1b[0m\n"

git:
	@git add .
	@git commit -m "$(C)"
	@git push

clean:
	@rm -rf build

fclean: clean
	@rm -rf $(NAME)
	@echo "\t\n\x1b[96mPony's \x1b[91mlibrary has been cleaned!\x1b[0m\n"

re: fclean all
