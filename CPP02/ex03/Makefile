NAME = bsp

SRCS = Fixed.cpp Point.cpp bsp.cpp main.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
