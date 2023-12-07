NAME		:=	interface

CC			:=	c++

FLAGS		:=	-g -Wall -Wextra -Werror -std=c++98

SRCS		:=	main.cpp			\
				AMateria.cpp		\
				Character.cpp		\
				Cure.cpp			\
				Ice.cpp				\
				MateriaSource.cpp

OBJS_DIR	:=	objs/

OBJS 		:=	$(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

# COLORS ================================================================= #

RED		=	\033[0;91m
GREEN	=	\033[0;92m
YELLOW	=	\033[0;93m
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
	@echo "$(RED)All object files removed.$(WHITE)"

fclean:	clean
	@rm $(NAME)
	@rm -rf $(OBJS_DIR)

re:	fclean all

.PHONY:	all clean fclean re

.SILENT:
