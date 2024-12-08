NAME    = phonebook
CPP     = @c++
FLAGS   = -std=c++98 -Wall -Wextra -Werror -fsanitize=address
SRCS    = $(wildcard *.cpp)
OBJS    = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

akef:
	@make fclean 
	@make all
	@make clean

.PHONY: all clean fclean re