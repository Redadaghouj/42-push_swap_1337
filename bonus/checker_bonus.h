/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:28:28 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/19 17:52:54 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include "gnl_bonus/get_next_line_bonus.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;

char		**ft_split(char const *s, char c);
void		*free_buffer(char **buffer, int len);
int			is_only_spaces(char *str);
int			is_digit(char *str);
int			is_duplicated(t_stack **stack, int num);
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
t_stack		*get_minimum(t_stack *stack);
t_stack		*get_biggest(t_stack *stack);
void		load_stack(int argc, char *argv[], t_stack **stack);
void		push_num_to_stack(int num, t_stack **stack_a);
void		move_min_to_top(t_stack **stack);
void		free_and_exit(t_stack **stack);
void		error_msg(void);
int			ft_atoi(const char *nptr);
void		apply_operations(t_stack **stack_a, t_stack **stack_b, char *opr);
int			is_sorted_bonus(t_stack *stack_a, t_stack *stack_b);
void		failure_exit(t_stack **stack_a, t_stack **stack_b);
void		success_exit(t_stack **stack_a, t_stack **stack_b);
int			ft_strcmp(char *s1, char *s2);

#endif