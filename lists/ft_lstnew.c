/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:17:44 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/13 21:24:30 by reda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstnew(int value)
{
	t_stack	*node;

	node = (t_stack *) malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = value;
	node->index = 0;
	node->next = NULL;
	return (node);
}