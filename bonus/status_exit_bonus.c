/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   status_exit_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:12:00 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/20 11:13:25 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	error_msg(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
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
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	result_msg("KO\n", 2, EXIT_FAILURE);
}

void	success_exit(t_stack **stack_a, t_stack **stack_b)
{
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	result_msg("OK\n", 1, EXIT_SUCCESS);
}
