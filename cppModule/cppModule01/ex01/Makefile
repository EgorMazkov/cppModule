NAME			=	zombieHorde

CC				=	clang++

CDEBUG			=	-fsanitize=adress -g -std=c++98

SRC				=	Zombie.cpp main.cpp zombieHorde.cpp

OBJ				=	$(SRC:.cpp=.o)
OBJ_DIR			=	./objs/
OBJS			=	$(addprefix $(OBJ_DIR), $(OBJ))

all				:	$(NAME)

$(NAME)			:	$(OBJS)
					@$(CC) -o $@ $^
					@echo DONE

$(OBJ_DIR)%.o	:	%.cpp
					@mkdir -p $(OBJ_DIR)
					@$(CC) -c $< -o $@

.PHONY			:	all fclean clean re

clean			:
				@rm -rf $(OBJ_DIR)

fclean			:	clean
				@rm -rf $(NAME)

re				:	fclean all