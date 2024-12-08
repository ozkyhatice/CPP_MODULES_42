NAME		= form
SRC			= main.cpp Bureaucrat.cpp Form.cpp
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