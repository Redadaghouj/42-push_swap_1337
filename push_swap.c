/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:24:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/11 15:00:17 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// -REMOVE-
void	print_array(int *nums, int len)
{
	int i = 0;
	while (i < len)
	{
		printf("%d\n", nums[i]);
		i++;
	}
}
// -REMOVE-

void	error_msg()
{
	write(2, "Error\n", 6);
	exit(1);
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