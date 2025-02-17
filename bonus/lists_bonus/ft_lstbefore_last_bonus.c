/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbefore_last_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:13:39 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/17 12:50:13 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

t_stack	*ft_lstbefore_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next->next != NULL)
		lst = lst->next;
	return (lst);
}
