/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_alg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:15:21 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/15 21:50:26 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stack)
{
	int		idx;

	idx = get_biggest_idx(*stack);
	if (is_sorted(*stack))
		return ;
	if (idx == 3)
		sa(stack);
	else if (idx == 1)
	{
		ra(stack);
		sort_three(stack);
	}
	else
	{
		rra(stack);
		sort_three(stack);
	}
}

	// ra		sa
	// 3 2 1 -> 2 1 3 -> 1 2 3
	// 3 1 2 -> 1 2 3
	// sa
	// 2 1 3 -> 1 2 3 ✅
	// rra		sa
	// 1 3 2 -> 2 1 3 -> 1 2 3
	// 2 3 1 -> 1 2 3