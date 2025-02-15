/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:28:28 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/15 20:08:26 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h> //-REMOVE-
#include <unistd.h>
#include <stdlib.h>
#include <limits.h> // CHECK: if i use it

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;

char		**ft_split(char const *s, char c);
void		*free_buffer(char **buffer, int len);
int			ft_strlen(const char *s);
int			ft_count_args(int argc, char **argv);
int			is_only_spaces(char *str);
int			is_digit(char *str);
void		check_duplicated(int *nums, int len);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
void		ft_lstclear(t_stack **lst);
t_stack		*ft_lstlast(t_stack *lst);
t_stack		*ft_lstnew(int value);
t_stack		*ft_lstbefore_last(t_stack *lst);
void		print_list(t_stack *stack_a);
int			swap(t_stack **stack);
void		ft_putstr_fd(char *str, int fd);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);
int			is_sorted(int *nums, int len);
void		sort_three(t_stack **stack);
int			get_biggest_idx(t_stack *stack);
void		parse_int_array(int len, int argc, char *argv[], int *nums);

#endif