/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:24:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/16 21:46:58 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error_msg(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	result_msg(char *msg, int fd, int exit_code)
{
	ft_putstr_fd(msg, fd);
	exit(exit_code);
}

void    failure_exit()
{
    result_msg("KO\n", 2, 1);
}

void    success_exit()
{
    result_msg("OK\n", 1, 0);
}

void	push_num_to_stack(int num, t_stack **stack_a)
{
	t_stack	*node;

	node = ft_lstnew(num);
	if (!node)
		free_and_exit(stack_a);
	ft_lstadd_back(stack_a, node);
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
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	load_stack(argc - 1, argv + 1, &stack_a);
    char *line = get_next_line(0);
	while (line)
	{
		printf("line = %s\n", line);
		line = get_next_line(0);
	}
	// print_list(stack_a);
	return (0);
}
