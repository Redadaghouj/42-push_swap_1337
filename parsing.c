/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:55:04 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/15 21:00:22 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		{
			ft_lstclear(stack);
			error_msg();
		}
		buffer = ft_split(argv[i], ' ');
		if (!buffer)
			error_msg();
		while (buffer[j] != NULL)
			push_num_to_stack(ft_atoi(buffer[j++]), stack);
		free_buffer(buffer, j);
		i++;
	}
	check_duplicated(*stack);
}
