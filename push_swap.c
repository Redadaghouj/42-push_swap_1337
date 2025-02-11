/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:24:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/11 14:52:47 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg()
{
	write(2, "Error\n", 6);
	exit(1);
}

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
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != ' ')
			return 0;
		i++;
	}
	return (1);
}

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

void	print_array(int *nums, int len)
{
	int i = 0;
	while (i < len)
	{
		printf("%d\n", nums[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	*nums;
	int len;

	len = ft_count_args(argc - 1, argv + 1);
	nums = parse_int_array(len, argc - 1, argv + 1);
	// create nodes and add it to the stack
	return (0);
}

// 0 - 15 --> 5 - 100 elements
// 0 - 35 --> +101 elements