CC := cc
CFLAGS := -Wextra -Wall -Werror

NAME := push_swap

NAME_BONUS := checker

RM := rm -f

GNL_DIR := bonus/gnl_bonus

LISTS_DIR := bonus/lists_bonus

UTILS_DIR := bonus/utils_bonus

OP_DIR := bonus/operations_bonus

SRCS := push_swap.c utils/ft_split.c utils/ft_putstr_fd.c \
	utils/ft_strlen.c utils/ft_atoi.c lists/ft_lstadd_back.c \
	lists/ft_lstclear.c lists/ft_lstlast.c lists/ft_lstbefore_last.c \
	lists/ft_lstnew.c parsing.c operations/swap.c operations/push.c \
	operations/rotate.c operations/reverse_rotate.c push_swap_utils.c \
	sorting_alg.c lists/ft_lstsize.c

BONUS := bonus/parsing_bonus.c bonus/checker_bonus.c bonus/checker_utils_bonus.c \
	bonus/status_exit_bonus.c ${UTILS_DIR}/ft_split_bonus.c ${UTILS_DIR}/ft_putstr_fd_bonus.c \
	${UTILS_DIR}/ft_atoi_bonus.c ${UTILS_DIR}/ft_strcmp_bonus.c ${LISTS_DIR}/ft_lstadd_back_bonus.c \
	${LISTS_DIR}/ft_lstclear_bonus.c ${LISTS_DIR}/ft_lstlast_bonus.c ${LISTS_DIR}/ft_lstbefore_last_bonus.c \
	${LISTS_DIR}/ft_lstnew_bonus.c ${LISTS_DIR}/ft_lstsize_bonus.c ${OP_DIR}/swap_bonus.c \
	${OP_DIR}/push_bonus.c ${OP_DIR}/rotate_bonus.c ${OP_DIR}/reverse_rotate_bonus.c \
	${GNL_DIR}/get_next_line_utils_bonus.c ${GNL_DIR}/get_next_line_bonus.c

OBJ := ${SRCS:.c=.o}

OBJ_BONUS := ${BONUS:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.c push_swap.h
	${CC} ${CFLAGS} -c $< -o $@

bonus/%.o: bonus/%.c bonus/push_swap_bonus.h
	${CC} ${CFLAGS} -c $< -o $@

bonus: ${NAME_BONUS}

${NAME_BONUS}: ${OBJ_BONUS} 
	${CC} ${CFLAGS} ${OBJ_BONUS} -o ${NAME_BONUS}

clean:
	@${RM} ${OBJ} ${OBJ_BONUS}

fclean: clean
	@${RM} ${NAME} ${NAME_BONUS}

re: fclean all

.PHONY: all clean fclean re