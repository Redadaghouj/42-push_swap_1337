CC := cc
CFLAGS := -Wextra -Wall -Werror -w

NAME := push_swap

NAME_BONUS := checker_os

RM := rm -f

SRCS := push_swap.c utils/ft_split.c utils/ft_putstr_fd.c utils/ft_strlen.c utils/ft_atoi.c lists/ft_lstadd_back.c lists/ft_lstclear.c lists/ft_lstlast.c lists/ft_lstbefore_last.c lists/ft_lstnew.c parsing.c operations/swap.c operations/push.c operations/rotate.c operations/reverse_rotate.c push_swap_utils.c sorting_alg.c lists/ft_lstsize.c

BONUS := bonus/gnl/get_next_line_utils.c bonus/gnl/get_next_line.c bonus/parsing_bonus.c bonus/push_swap_bonus.c bonus/push_swap_utils_bonus.c bonus/sorting_alg_bonus.c ./utils/ft_split.c ./utils/ft_putstr_fd.c ./utils/ft_strlen.c ./utils/ft_atoi.c ./lists/ft_lstadd_back.c ./lists/ft_lstclear.c ./lists/ft_lstlast.c ./lists/ft_lstbefore_last.c ./lists/ft_lstnew.c ./lists/ft_lstsize.c ./operations/swap.c ./operations/push.c ./operations/rotate.c ./operations/reverse_rotate.c

OBJ := ${SRCS:.c=.o}

OBJ_BONUS := ${BONUS:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.c push_swap.h
	${CC} ${CFLAGS} -c $< -o $@

bonus: ${OBJ_BONUS} 
	${CC} ${CFLAGS} ${OBJ_BONUS} -o ${NAME_BONUS}

clean:
	@${RM} ${OBJ} ${OBJ_BONUS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re