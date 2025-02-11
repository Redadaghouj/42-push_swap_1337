/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:39:56 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/11 13:35:42 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	skip_isspace(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i] == ' ')
		i++;
	return (i);
}

int	check_sign(const char *nptr, int i, int *sign)
{
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	int	res;
	int	prev_res;	

	i = skip_isspace(nptr);
	sign = 1;
	res = 0;
	i = check_sign(nptr, i, &sign);
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		prev_res = res;
		res = res * 10 + (nptr[i] - '0');
		if (prev_res > res)
			error_msg();
		// else if (sign == -1 && prev_res > res)
		// 	error_msg();
		i++;
	}
	return (res * sign);
}
