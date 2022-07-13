CC = gcc
CFLAGS = -Wall -Wextra -Werror 

SRCS = push_swap.c libft_fonctions.c list_fonctions_begin.c list_fonctions_end.c push_swap_utils.c functionsthatwriteshit.c rotate_fonctions.c rrotate_fonctions.c swap_fonctions.c validation_fonctions.c validation_utils.c three_and_five_sort.c big_sort.c

SRCS_BONUS = get_next_line.c push_swap_utils_bonus.c get_next_line_utils.c libft_fonctions.c swap_fonctions_bonus.c functionsthatwriteshit.c rotate_fonctions_bonus.c rrotate_fonctions_bonus.c checker.c validation_fonctions.c validation_utils.c push_swap_utils.c list_fonctions_begin.c list_fonctions_end.c

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME = push_swap
NAME_BONUS = checker

HEADER = push_swap.h

%.o:%.c
	@$(CC) $(CFLAGS) -c $^ -I $(HEADER)

${NAME}: ${OBJS} 
	@$(CC) $(CFLAGS) $^ -o $@ -I $(HEADER)

${NAME_BONUS}: ${OBJS_BONUS}
	@$(CC) $(CFLAGS) $^ -o $@ -I $(HEADER)

all: ${NAME} $(HEADER)

bonus: ${NAME_BONUS} $(HEADER)

clean:
	@rm -f ${OBJS}
	@rm -f ${OBJS_BONUS}

fclean:	clean
	@rm -f ${NAME}
	@rm -f ${NAME_BONUS}

re:	fclean all

.PHONY: all clean fclean re