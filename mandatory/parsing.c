/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:55:04 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/19 17:47:09 by mdaghouj         ###   ########.fr       */
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
			if (((i - 1) != -1 && str[i - 1] != ' ')
				|| ((i + 1) <= ft_strlen(str) && str[i + 1] == ' '))
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

int	is_duplicated(t_stack **stack, int num)
{
	t_stack	*ptr;

	ptr = *stack;
	while (ptr != NULL)
	{
		if (ptr->data == num)
			return (1);
		ptr = ptr->next;
	}
	return (0);
}

void	load_stack(int argc, char *argv[], t_stack **stack)
{
	char	**buffer;
	int		i;
	int		j;

	i = 0;
	while (argc > i)
	{
		j = 0;
		if (argv[i][0] == '\0' || is_only_spaces(argv[i]) || !is_digit(argv[i]))
			free_and_exit(stack);
		buffer = ft_split(argv[i], ' ');
		if (!buffer)
			free_and_exit(stack);
		while (buffer[j] != NULL)
		{
			if (is_duplicated(stack, ft_atoi(buffer[j])))
			{
				free_buffer(buffer, j);
				free_and_exit(stack);
			}
			push_num_to_stack(ft_atoi(buffer[j++]), stack);
		}
		free_buffer(buffer, j);
		i++;
	}
}
