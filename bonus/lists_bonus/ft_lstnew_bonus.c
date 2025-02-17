/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:17:44 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/17 12:50:22 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

t_stack	*ft_lstnew(int value)
{
	t_stack	*node;

	node = (t_stack *) malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = value;
	node->next = NULL;
	return (node);
}
