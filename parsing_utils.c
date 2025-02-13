/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:55:00 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/13 20:50:18 by reda             ###   ########.fr       */
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
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != ' ' && str[i] != '\0')
			return 0;
		i++;
	}
	return (1);
}

void	check_duplicated(int *nums, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (nums[i] == nums[j])
				error_msg();
			j++;
		}
		i++;
	}
}
