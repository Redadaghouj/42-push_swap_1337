/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:14:54 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/15 20:05:05 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int *nums, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (nums[i] > nums[i + 1])
			return (0);
		i++;
	}
	return (1);
}
int	get_biggest_idx(t_stack *stack)
{
	int	max;
	int	i;
	int	idx;

	max = stack->data;
	i = 1;
	idx = 1;
	while (stack != NULL)
	{
		if (stack->data > max)
		{
			max = stack->data;
			idx = i;
		}
		i++;
		stack = stack->next;
	}
	return (idx);
}