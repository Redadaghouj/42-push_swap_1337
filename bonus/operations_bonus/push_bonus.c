/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:37:07 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/17 12:57:17 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

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
	push(stack_b, stack_a);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
}
