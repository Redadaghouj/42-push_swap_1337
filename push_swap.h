#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h> //-REMOVE-
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_stack
{
	int value;
	int index;
	struct s_stack *next;
} t_stack;

char		**ft_split(char const *s, char c);
void		*free_buffer(char **buffer, int len);
int			ft_strlen(const char *s);
int			ft_count_args(int argc, char **argv);
void	print_array(int *nums, int len); //-REMOVE-
#endif