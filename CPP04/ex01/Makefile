# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: recozzi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 17:07:12 by recozzi           #+#    #+#              #
#    Updated: 2023/11/17 17:07:13 by recozzi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	brain

CC		:=	c++

FLAGS	:=	-g -Wall -Wextra -Werror -std=c++98

SRC		:=	main.cpp		\
			Cat.cpp			\
			Dog.cpp			\
			Animal.cpp		\
			Brain.cpp

OBJ		:=	$(SRC:.cpp=.o)

# COLORS ================================================================= #

RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
CYAN = \033[0;96m
WHITE = \033[0;97m

# ======================================================================== #

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(GREEN)Compiling:$(WHITE) $<"

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(YELLOW)- Program Name: $(WHITE)${NAME}"
	@echo "$(YELLOW)- Compiler: $(WHITE)${CC}"
	@echo "$(YELLOW)- Flags: $(WHITE)${FLAGS}"

clean:
	@rm -rf $(OBJ)
	@echo "$(RED)All $(CYAN)$(NAME)$(RED)'s objects removed with $(WHITE)${RM} $(YELLOW)"

fclean:	clean
	@rm -rf $(NAME)
	@echo "$(RED)..and $(CYAN)${NAME} $(RED)as been removed"

re:	fclean all

.PHONY:	all clean fclean re

.SILENT:
