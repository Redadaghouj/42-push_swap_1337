/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:37:07 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/15 17:30:22 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push(t_stack **from, t_stack **to)
{
	t_stack	*ptr;

	if (!*from)
		return (0);
	ptr = *from;
	*from = (*from)->next;
	ptr->next = *to;
	*to = ptr;
	return (1);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	if (push(stack_b, stack_a))
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	if (push(stack_a, stack_b))
		ft_putstr_fd("pb\n", 1);
}
