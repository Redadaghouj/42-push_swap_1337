/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:12:32 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/18 15:34:02 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	range_sort(t_stack **stack_a, t_stack **stack_b)
{
	int		range_min;
	int		range_max;
	int		position;
	t_stack	*biggest_node;

	range_min = 0;
	range_max = ft_lstsize(*stack_a) * 0.048 + 10;
	range_push(stack_a, stack_b, range_min, range_max);
	while (*stack_b != NULL)
	{
		biggest_node = get_biggest(*stack_b);
		position = get_biggest_position(*stack_b, biggest_node->data);
		move_to_top(stack_b, biggest_node, position);
		pa(stack_a, stack_b);
	}
}

void	range_push(t_stack **stack_a, t_stack **stack_b, int min, int max)
{
	while (*stack_a != NULL)
	{
		if ((*stack_a)->index >= min && (*stack_a)->index <= max)
		{
			pb(stack_a, stack_b);
			min++;
			max++;
		}
		else if ((*stack_a)->index < min)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			min++;
			max++;
		}
		else
			ra(stack_a);
	}
}

int	get_biggest_position(t_stack *stack, int biggest)
{
	int	position;

	position = 0;
	while (stack != NULL)
	{
		if (stack->data == biggest)
			return (position);
		position++;
		stack = stack->next;
	}
	return (position);
}

void	move_to_top(t_stack **stack, t_stack *biggest_node, int position)
{
	int		mid;

	mid = ft_lstsize(*stack) / 2;
	while (*stack != biggest_node)
	{
		if (position > mid)
			rrb(stack);
		else
			rb(stack);
	}
}
