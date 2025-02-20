/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:24:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/20 11:10:04 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

void	push_num_to_stack(int num, t_stack **stack_a)
{
	t_stack	*node;

	node = ft_lstnew(num);
	if (!node)
		free_and_exit(stack_a);
	set_index(stack_a, node);
	ft_lstadd_back(stack_a, node);
}

void	set_index(t_stack **stack, t_stack *node)
{
	t_stack	*ptr;

	ptr = *stack;
	while (ptr != NULL)
	{
		if (node->data < ptr->data)
			ptr->index++;
		else
			node->index++;
		ptr = ptr->next;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	load_stack(argc - 1, argv + 1, &stack_a);
	if (is_sorted(stack_a))
	{
		ft_lstclear(&stack_a);
		return (0);
	}
	sort_stack(&stack_a, &stack_b);
	return (0);
}
