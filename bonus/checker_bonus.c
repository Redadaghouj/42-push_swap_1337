/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:24:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/17 17:18:16 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	push_num_to_stack(int num, t_stack **stack_a)
{
	t_stack	*node;

	node = ft_lstnew(num);
	if (!node)
		free_and_exit(stack_a);
	ft_lstadd_back(stack_a, node);
}

void	print_list(t_stack *stack_a) // -REMOVE-
{
	while (stack_a != NULL)
	{
		printf("%d\n", stack_a->data);
		stack_a = stack_a->next;
	}
}

void	apply_operations_exit(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a)
		ft_lstclear(stack_a);
	if (*stack_b)
		ft_lstclear(stack_b);
	error_msg();
}

void	apply_operations(t_stack **stack_a, t_stack **stack_b, char *operation)
{
	if (ft_strcmp(operation, "pa\n") == 0)
		pa(stack_a, stack_b);
	else if (ft_strcmp(operation, "pb\n") == 0)
		pb(stack_a, stack_b);
	else if (ft_strcmp(operation, "ra\n") == 0)
		ra(stack_a);
	else if (ft_strcmp(operation, "rb\n") == 0)
		rb(stack_b);
	else if (ft_strcmp(operation, "rr\n") == 0)
		rr(stack_a, stack_b);
	else if (ft_strcmp(operation, "sa\n") == 0)
		sa(stack_a);
	else if (ft_strcmp(operation, "sb\n") == 0)
		sb(stack_b);
	else if (ft_strcmp(operation, "ss\n") == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp(operation, "rra\n") == 0)
		rra(stack_a);
	else if (ft_strcmp(operation, "rrb\n") == 0)
		rrb(stack_b);
	else if (ft_strcmp(operation, "rrr\n") == 0)
		rrr(stack_a, stack_b);
	else
		apply_operations_exit(stack_a, stack_b);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*operation;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	load_stack(argc - 1, argv + 1, &stack_a);
    operation = get_next_line(0);
	while (operation)
	{
		apply_operations(&stack_a, &stack_b, operation);
		operation = get_next_line(0);
	}
	if (is_sorted_bonus(stack_a, stack_b))
		success_exit(&stack_a, &stack_b);
	else
		failure_exit(&stack_a, &stack_b);
	return (0);
}
