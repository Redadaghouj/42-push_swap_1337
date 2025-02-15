CC := cc
CFLAGS := -Wextra -Wall -Werror -w

NAME := push_swap

RM := rm -f

SRCS := push_swap.c utils/ft_split.c utils/ft_putstr_fd.c utils/ft_strlen.c utils/ft_atoi.c parsing_utils.c lists/ft_lstadd_back.c lists/ft_lstclear.c lists/ft_lstlast.c lists/ft_lstbefore_last.c lists/ft_lstnew.c parsing.c operations/swap.c operations/push.c operations/rotate.c operations/reverse_rotate.c push_swap_utils.c

OBJ := ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.c push_swap.h
	${CC} ${CFLAGS} -c $< -o $@

bonus: ${NAME}

clean:
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re