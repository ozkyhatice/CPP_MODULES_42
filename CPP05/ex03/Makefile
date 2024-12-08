NAME		= intern
SRC			= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
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