/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:38:25 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/17 12:57:39 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	reverse_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!*stack)
		return (0);
	last = ft_lstlast(*stack);
	before_last = ft_lstbefore_last(*stack);
	last->next = *stack;
	*stack = last;
	before_last->next = NULL;
	return (1);
}

void	rra(t_stack **stack_a)
{
	reverse_rotate(stack_a);
}

void	rrb(t_stack **stack_b)
{
	reverse_rotate(stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
