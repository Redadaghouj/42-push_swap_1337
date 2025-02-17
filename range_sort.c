/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:12:32 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/17 22:54:35 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	range_sort(t_stack **stack_a, t_stack **stack_b)
{
	int		range_min;
	int		range_max;
	int		position;
	t_stack	*biggest_node;
	t_stack	*ptr;

	range_min = 0;
	range_max = ft_lstsize(*stack_a) * 0.048 + 10;
	apply_range_sort(stack_a, stack_b, range_min, range_max);
	ptr = *stack_b;
	while (ptr != NULL)
	{
		biggest_node = get_biggest(*stack_b);
		position = get_biggest_node_pos(*stack_b, biggest_node->data);
		move_to_top(stack_b, biggest_node, position);
		pa(stack_a, stack_b);
		ptr = ptr->next;
	}
}

void	apply_range_sort(t_stack **stack_a, t_stack **stack_b, int range_min, int range_max)
{
	t_stack	*ptr;

	ptr = *stack_a;
	while (ptr != NULL)
	{
		if (ptr->index >= range_min && ptr->index <= range_max)
		{
			pb(stack_a, stack_b);
			range_min++;
			range_max++;
		}
		else if (ptr->index < range_min)
			{
				pb(stack_a, stack_b);
				rb(stack_b);
				range_min++;
				range_max++;
			}
		else
			ra(stack_a);
		ptr = ptr->next;
	}
}

int	get_biggest_node_pos(t_stack *stack, int biggest)
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
	t_stack	*ptr;

	mid = ft_lstsize(*stack) / 2;
	ptr = *stack;
	while (*stack == biggest_node)
	{
		if (position > mid)
			rrb(stack);
		else
			rb(stack);
		ptr = ptr->next;
	}
}
