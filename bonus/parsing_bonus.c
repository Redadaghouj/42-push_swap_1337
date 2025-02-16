/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:55:04 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/16 20:51:36 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	check_duplicated(t_stack **stack)
{
	t_stack	*iterate;
	t_stack	*ptr;

	ptr = *stack;
	while (ptr != NULL)
	{
		iterate = ptr->next;
		while (iterate != NULL)
		{
			if (ptr->data == iterate->data)
				free_and_exit(stack);
			iterate = iterate->next;
		}
		ptr = ptr->next;
	}
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
			push_num_to_stack(ft_atoi(buffer[j++]), stack);
		free_buffer(buffer, j);
		i++;
	}
	check_duplicated(stack);
}
