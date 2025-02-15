/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:24:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/15 20:07:09 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	push_num_to_stack(int num, t_stack **stack_a)
{
	t_stack	*node;

	node = ft_lstnew(num);
	if (!node)
		error_msg();
	ft_lstadd_back(stack_a, node);
}

void	load_stack(int *nums, int len, t_stack **stack_a)
{
	int	i;

	i = 0;
	while (i < len)
		push_num_to_stack(nums[i++], stack_a);
}

void	print_list(t_stack *stack_a)
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
	if (is_sorted(nums, len))
		return (0);
	load_stack(nums, len, &stack_a);
	if (len == 2)
		sa(&stack_a);
	if (len == 3)
		sort_three(&stack_a);
	print_list(stack_a);
	// rra(&stack_a);
	// print_list(stack_a);
	return (0);
}
// 0 - 15 --> 5 - 100 elements
// 0 - 35 --> +101 elements