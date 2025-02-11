/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:55:04 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/11 14:56:57 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_count_args(int argc, char **argv)
{
	char	**buffer;
	int		count;
	int		i;
	int		j;

	count = 0;
	i = 0;
	while (argc > i)
	{
		if (argv[i][0] == '\0' || is_only_spaces(argv[i]) || !is_digit(argv[i]))
			error_msg();
		buffer = ft_split(argv[i], ' ');
		if (!buffer)
			error_msg();
		j = 0;
		while (buffer[j] != NULL)
		{
			count++;
			j++;
		}
		free_buffer(buffer, j);
		i++;
	}
	return (count);
}

int	*parse_int_array(int len, int argc, char *argv[])
{
	char	**buffer;
	int		*nums;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	nums = (int *)malloc(sizeof(int) * len);
	if (!nums)
		error_msg();
	while (argc > i)
	{
		j = 0;
		buffer = ft_split(argv[i], ' ');
		if (!buffer)
			error_msg();
		while (buffer[j] != NULL)
			nums[k++] = ft_atoi(buffer[j++]);
		free_buffer(buffer, j);
		i++;
	}
	check_duplicated(nums, len);
	return (nums);
}
