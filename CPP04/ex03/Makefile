NAME		= materia
SRC			= AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp
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