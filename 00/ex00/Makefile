NAME    = megaphone
FLAGS   = -std=c++98 -Wall -Wextra -Werror -fsanitize=address
SRCS    = $(wildcard *.cpp)

all: $(NAME)

$(NAME):
	@c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re