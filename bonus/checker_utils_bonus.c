/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:14:54 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/20 17:56:59 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	is_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}

t_stack	*get_minimum(t_stack *stack)
{
	t_stack	*min;

	min = stack;
	while (stack != NULL)
	{
		if (stack->data < min->data)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_stack	*get_biggest(t_stack *stack)
{
	t_stack	*max;

	max = stack;
	while (stack != NULL)
	{
		if (stack->data > max->data)
			max = stack;
		stack = stack->next;
	}
	return (max);
}

void	move_min_to_top(t_stack **stack)
{
	t_stack	*min;

	min = get_minimum(*stack);
	while (min != *stack)
	{
		if (min->next == NULL)
			rra(stack);
		else if (min->next->next == NULL)
			rra(stack);
		else
			ra(stack);
	}
}
