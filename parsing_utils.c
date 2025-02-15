/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:55:00 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/15 20:20:41 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_only_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	is_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if ((i - 1) != -1 && str[i - 1] != ' ')
				return (0);
			i++;
		}
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != ' '
			&& str[i] != '\0')
			return (0);
		i++;
	}
	return (1);
}

void	check_duplicated(t_stack *stack)
{
	t_stack *iterate;

	while (stack != NULL)
	{
		iterate = stack->next;
		while (iterate != NULL)
		{
			if (stack->data == iterate->data)
				error_msg();
			iterate = iterate->next;
		}
		stack = stack->next;
	}
}
