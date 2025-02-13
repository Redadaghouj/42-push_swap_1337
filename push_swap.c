/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:24:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/13 23:52:56 by reda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg()
{
	write(2, "Error\n", 6);
	exit(1);
}

void	push_num_to_stack(int num, t_stack **stack_a)
{
	t_stack *node;

	node = ft_lstnew(num);
	if (!node)
		error_msg();
	ft_lstadd_front(stack_a, node);
}

void	load_stack(int *nums, int len, t_stack **stack_a)
{
	int	i;

	i = 0;
	while (i < len)
	{
		push_num_to_stack(nums[i], stack_a);
		i++;
	}
	print_list(*stack_a);
}

void print_list(t_stack *stack_a)
{
	while (stack_a != NULL)
	{
		printf("%d\n", stack_a->data);
		stack_a = stack_a->next;
	}
}

int	main(int argc, char *argv[])
{
	int		*nums;
	int		len;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	len = ft_count_args(argc - 1, argv + 1);
	nums = (int *)malloc(sizeof(int) * len);
	if (!nums)
		error_msg();
	parse_int_array(len, argc - 1, argv + 1, nums);
	load_stack(nums, len, &stack_a);
	return (0);
}

// 0 - 15 --> 5 - 100 elements
// 0 - 35 --> +101 elements