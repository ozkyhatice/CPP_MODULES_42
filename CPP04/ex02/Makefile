NAME		= animal03
SRC			= main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp
FLAGS		= -Wall -Wextra -Werror -std=c++98
COMPILER	= c++

all : $(NAME)

$(NAME) : $(SRC)
	$(COMPILER) $(FLAGS) $(SRC) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean	: clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re