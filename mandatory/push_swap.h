/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:28:28 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/03/03 15:36:21 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}					t_stack;

# define EXIT_FAILURE 1
# define STD_ERROR 2

char		**ft_split(char const *s, char c);
void		*free_buffer(char **buffer);
int			ft_strlen(const char *s);
int			is_only_spaces(char *str);
int			is_digit(char *str);
int			is_duplicated(t_stack *stack, int num);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
void		ft_lstclear(t_stack **lst);
int			ft_lstsize(t_stack *lst);
t_stack		*ft_lstlast(t_stack *lst);
t_stack		*ft_lstnew(int value);
t_stack		*ft_lstbefore_last(t_stack *lst);
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
int			is_sorted(t_stack *stack);
void		sort_three(t_stack **stack);
void		sort_four(t_stack **stack_a, t_stack **stack_b);
void		sort_five(t_stack **stack_a, t_stack **stack_b);
t_stack		*get_minimum(t_stack *stack);
t_stack		*get_biggest(t_stack *stack);
void		load_stack(int argc, char *argv[], t_stack **stack);
void		push_num_to_stack(int num, t_stack **stack_a);
void		move_min_to_top(t_stack **stack);
void		sort_stack(t_stack **stack_a, t_stack **stack_b);
void		free_and_exit(t_stack **stack);
void		error_msg(void);
int			ft_atoi(const char *nptr);
void		set_index(t_stack **stack, t_stack *node);
void		range_sort(t_stack **stack_a, t_stack **stack_b);
void		range_push(t_stack **stack_a, t_stack **stack_b, int min, int max);
void		move_to_top(t_stack **stack, t_stack *biggest_node, int position);
int			get_biggest_position(t_stack *stack, int biggest);

#endif