/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   status_exit_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:12:00 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/17 18:44:24 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	error_msg(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	free_and_exit(t_stack **stack)
{
	ft_lstclear(stack);
	error_msg();
}

void	result_msg(char *msg, int fd, int exit_code)
{
	ft_putstr_fd(msg, fd);
	exit(exit_code);
}

void	failure_exit(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_b)
		ft_lstclear(stack_b);
	ft_lstclear(stack_a);
	result_msg("KO\n", 2, 1);
}

void	success_exit(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_b)
		ft_lstclear(stack_b);
	ft_lstclear(stack_a);
	result_msg("OK\n", 1, 0);
}
