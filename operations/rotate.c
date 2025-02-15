/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:37:46 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/15 17:13:20 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rotate(t_stack **stack)
{
	t_stack	*ptr;
	t_stack	*last;

	if (!*stack)
		return (0);
	ptr = *stack;
	*stack = (*stack)->next;
	last = ft_lstlast(*stack);
	last->next = ptr;
	ptr->next = NULL;
	return (1);
}

void	ra(t_stack **stack_a)
{
	if (rotate(stack_a))
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack **stack_b)
{
	if (rotate(stack_b))
		ft_putstr_fd("ra\n", 1);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	ra(stack_b);
}
