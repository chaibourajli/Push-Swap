
NAME = push_swap
SRC = main.c check_args.c stack_operations.c utils.c

all : $(NAME)
$(NAME) :
	gcc -c $(SRC)
	gcc -Wall -Wextra -Werror  *.o  -o $(NAME)
clean :
	rm -rf *.o
fclean : clean
	rm -rf $(NAME)
re : fclean all