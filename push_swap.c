/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:24:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/06 12:21:45 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == ' ')
				printf('found space\n');
			j++;
		}
		i++;
		// j = 0;
		// while (argv[i][j] != '\0')
		// {
		// 	// if (argv[i][j] >= '0' && argv[i][j] <= '9')
				
		// 	// 5 "6" 8 -1 "9 7" " " 4-2 004
		// }
	}
	return (0);
}