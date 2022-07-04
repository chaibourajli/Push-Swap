
NAME = push_swap
SRC = main.c check_args.c stack_operations.c utils.c swap.c push.c reverse_rotate.c rotate.c

all : $(NAME)
$(NAME) :
	gcc -c $(SRC)
	gcc -Wall -Wextra -Werror  *.o  -o $(NAME)
clean :
	rm -rf *.o
fclean : clean
	rm -rf $(NAME)
re : fclean all