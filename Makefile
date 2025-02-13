CC := cc
CFLAGS := -Wextra -Wall -Werror -w

NAME := push_swap.a

AR := ar rcs

RM := rm -f

SRCS := push_swap.c utils/ft_split.c utils/ft_strlen.c utils/ft_atoi.c parsing_utils.c lists/ft_lstadd_front.c lists/ft_lstclear.c lists/ft_lstlast.c lists/ft_lstnew.c parsing.c

OBJ := ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${AR} $@ $?

%.o: %.c push_swap.h
	${CC} ${CFLAGS} -c $< -o $@

bonus: ${NAME}

clean:
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re