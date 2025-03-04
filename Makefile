CC := cc

CFLAGS := -Wextra -Wall -Werror

NAME := push_swap

NAME_BONUS := checker

RM := rm -f

BNS := bonus

GNL_BNS := bonus/gnl_bonus

LISTS_BNS := bonus/lists_bonus

UTILS_BNS := bonus/utils_bonus

OPERATIONS_BNS := bonus/operations_bonus

MANDO := mandatory

UTILS := mandatory/utils

LISTS := mandatory/lists

OPERATIONS := mandatory/operations

SRCS := ${MANDO}/push_swap.c ${MANDO}/push_swap_utils.c ${MANDO}/sorting_alg.c ${MANDO}/range_sort.c \
	${MANDO}/parsing.c ${UTILS}/ft_split.c ${UTILS}/ft_putstr_fd.c \
	${UTILS}/ft_strlen.c ${UTILS}/ft_atoi.c ${LISTS}/ft_lstadd_back.c \
	${LISTS}/ft_lstclear.c ${LISTS}/ft_lstlast.c ${LISTS}/ft_lstbefore_last.c \
	${LISTS}/ft_lstnew.c ${LISTS}/ft_lstsize.c ${OPERATIONS}/swap.c \
	${OPERATIONS}/push.c ${OPERATIONS}/rotate.c ${OPERATIONS}/reverse_rotate.c

BONUS := ${BNS}/parsing_bonus.c ${BNS}/checker_bonus.c ${BNS}/checker_utils_bonus.c \
	${BNS}/status_exit_bonus.c ${UTILS_BNS}/ft_split_bonus.c ${UTILS_BNS}/ft_putstr_fd_bonus.c \
	${UTILS_BNS}/ft_atoi_bonus.c ${UTILS_BNS}/ft_strcmp_bonus.c ${LISTS_BNS}/ft_lstadd_back_bonus.c \
	${LISTS_BNS}/ft_lstclear_bonus.c ${LISTS_BNS}/ft_lstlast_bonus.c ${LISTS_BNS}/ft_lstbefore_last_bonus.c \
	${LISTS_BNS}/ft_lstnew_bonus.c ${LISTS_BNS}/ft_lstsize_bonus.c ${OPERATIONS_BNS}/swap_bonus.c \
	${OPERATIONS_BNS}/push_bonus.c ${OPERATIONS_BNS}/rotate_bonus.c ${OPERATIONS_BNS}/reverse_rotate_bonus.c \
	${GNL_BNS}/get_next_line_utils_bonus.c ${GNL_BNS}/get_next_line_bonus.c

OBJ := ${SRCS:.c=.o}

OBJ_BONUS := ${BONUS:.c=.o}

all: ${NAME}

${NAME}: ${OBJ} ${MANDO}/push_swap.h
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

bonus/%.o: ${BNS}/%.c
	${CC} ${CFLAGS} -c $< -o $@

bonus: ${NAME_BONUS}

${NAME_BONUS}: ${OBJ_BONUS} ${BNS}/checker_bonus.h ${GNL_BNS}/get_next_line_bonus.h
	${CC} ${CFLAGS} ${OBJ_BONUS} -o ${NAME_BONUS}

clean:
	@${RM} ${OBJ} ${OBJ_BONUS}

fclean: clean
	@${RM} ${NAME} ${NAME_BONUS}

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re