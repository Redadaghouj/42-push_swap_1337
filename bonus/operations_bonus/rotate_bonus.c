/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:37:46 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/18 15:48:59 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	rotate(t_stack **stack)
{
	t_stack	*ptr;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
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
	rotate(stack_a);
}

void	rb(t_stack **stack_b)
{
	rotate(stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
