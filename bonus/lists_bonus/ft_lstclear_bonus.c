/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:03:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/18 15:48:27 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
