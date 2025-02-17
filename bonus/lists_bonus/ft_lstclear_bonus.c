/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:03:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/17 12:50:16 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*ptr;
	t_stack	*curr;

	if (!lst)
		return ;
	ptr = *lst;
	while (ptr != NULL)
	{
		curr = ptr;
		ptr = ptr->next;
		free(curr);
	}
	*lst = NULL;
}
