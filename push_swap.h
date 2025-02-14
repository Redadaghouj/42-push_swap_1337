#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h> //-REMOVE-
#include <unistd.h>
#include <stdlib.h>
#include <limits.h> // CHECK: if i use it

typedef struct s_stack
{
	int data;
	int index;
	struct s_stack *next;
} t_stack;

char		**ft_split(char const *s, char c);
void		*free_buffer(char **buffer, int len);
int			ft_strlen(const char *s);
int			ft_count_args(int argc, char **argv);
int			is_only_spaces(char *str);
int			is_digit(char *str);
void		check_duplicated(int *nums, int len);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
void		ft_lstclear(t_stack **lst);
t_stack		*ft_lstlast(t_stack *lst);
t_stack		*ft_lstnew(int value);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
void		print_list(t_stack *stack_a);
void		sa(t_stack **stack_a);
#endif