/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:38:25 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/18 16:46:06 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	reverse_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!*stack || !(*stack)->next)
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
	if (reverse_rotate(stack_a))
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack **stack_b)
{
	if (reverse_rotate(stack_b))
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
