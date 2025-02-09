/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:24:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/09 23:53:46 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_count_word(int argc, char **argv)
{
	int len;
	int i, j;

	i = 0, len = 0;
	while (i < argc)
	{ // "5 9" " 7 " 8 
		if (is_space(argv[i], ))
		j = 0;
		while (argv[i][j])
		{
			len++;
			j++;
		}
		i++;
		len++;
	}
}

int	main(int argc, char *argv[])
{
	int i; // "6 8  "
	char *str;
	int len;

	i = 1;
	len = ft_count_word(argc - 1, argv[1]);
	str = (char)malloc(sizeof(char) * len);
	while (i < argc)
	{
		// str[i] = '';
	}
	return (0);
}

// 0 - 15 --> 5 - 100 elements
// 0 - 35 --> +101 elements