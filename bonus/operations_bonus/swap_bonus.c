/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:32:27 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/17 15:15:16 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	swap(t_stack **stack)
{
	int	tmp;

	if (!(stack) || !*stack || !(*stack)->next)
		return (0);
	tmp = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = tmp;
	return (1);
}

void	sa(t_stack **stack_a)
{
	swap(stack_a);
}

void	sb(t_stack **stack_b)
{
	swap(stack_b);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
