/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:03:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/15 17:29:10 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
