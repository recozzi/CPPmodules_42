# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: recozzi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 13:59:12 by recozzi           #+#    #+#              #
#    Updated: 2023/12/06 14:32:36 by recozzi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	array

CC			:=	c++

FLAGS		:=	-g -Wall -Wextra -Werror -std=c++98

SRCS		:=	main.cpp

OBJS_DIR	:=	objs/

OBJS 		:=	$(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

# COLORS ================================================================= #

RED		=	\033[0;91m
GREEN	=	\033[0;92m
YELLOW	=	\033[0;93m
CYAN	=	\033[0;96m
WHITE	=	\033[0;97m

# ======================================================================== #

$(OBJS_DIR)%.o:	%.cpp
			@mkdir -p $(dir $@)
			@$(CC) $(FLAGS) -c $< -o $@
			@echo "$(GREEN)Compiling:$(WHITE) $<"

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(YELLOW)- Program Name: $(WHITE)${NAME}"
	@echo "$(YELLOW)- Compiler: $(WHITE)${CC}"
	@echo "$(YELLOW)- Flags: $(WHITE)${FLAGS}"

clean:
	@rm $(OBJS)
	@echo "$(RED)All $(CYAN)$(NAME)$(RED)'s objects removed..."

fclean:	clean
	@rm $(NAME)
	@rm -rf $(OBJS_DIR)
	@echo "$(RED)...And $(CYAN)${NAME}$(RED) as been removed."

re:	fclean all

.PHONY:	all clean fclean re

.SILENT:
