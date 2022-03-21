NAME			=	KarenFilter

CC				=	clang++

CDEBUG			=	-fsanitize=adress -g -std=c++98

SRC				=	main.cpp Karen.cpp

OBJ				=	$(SRC:.cpp=.o)
OBJ_DIR			=	./objs/
OBJS			=	$(addprefix $(OBJ_DIR), $(OBJ))

all				:	$(NAME)

$(NAME)			:	$(OBJS)
					@$(CC) -o $@ $^
					@echo "\033[32m""\n"Make DONE

$(OBJ_DIR)%.o	:	%.cpp
					@mkdir -p $(OBJ_DIR)
					@$(CC) -c $< -o $@

.PHONY			:	all fclean clean re

clean			:
				@rm -rf $(OBJ_DIR)
				@echo "\033[32m"clean Done

fclean			:	clean
				@rm -rf $(NAME) 1.replace
				@echo "\033[32m"flcean Done

re				:	fclean all