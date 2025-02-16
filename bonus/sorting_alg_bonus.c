/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_alg_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:15:21 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/16 20:51:19 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	sort_three(t_stack **stack)
{
	t_stack	*biggest;

	biggest = get_biggest(*stack);
	while (!is_sorted(*stack))
	{
		if (biggest->next == NULL)
			sa(stack);
		else if (biggest->next->next == NULL)
			rra(stack);
		else
			ra(stack);
	}
}

void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	move_min_to_top(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	move_min_to_top(stack_a);
	pb(stack_a, stack_b);
	sort_four(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	int	len;

	len = ft_lstsize(*stack_a);
	if (len == 2)
		sa(stack_a);
	else if (len == 3)
		sort_three(stack_a);
	else if (len == 4)
		sort_four(stack_a, stack_b);
	else if (len == 5)
		sort_five(stack_a, stack_b);
	else
		puts("Best move");
}
