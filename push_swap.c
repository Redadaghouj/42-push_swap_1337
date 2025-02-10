/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:24:12 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/10 16:26:48 by reda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg()
{
	write(2, "Error\n", 6);
	exit(1);
}

int	is_space(char *str)
{
	while (*str)
	{
		if (*str == ' ')
			return (0);
		str++;
	}
	return (1);
}

int ft_count_word(int argc, char **argv)
{
	int len;
	int i, j;

	i = 0, len = 0;
	while (i < argc)
	{ // "5 9" " 7 " 8 
		if (is_space(argv[i]))
			error_msg();
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
	len = ft_count_word(argc - 1, ++argv);
	str = (char *)malloc(sizeof(char) * len);
	while (i < argc)
	{
		// str[i] = '';
	}
	return (0);
}

// 0 - 15 --> 5 - 100 elements
// 0 - 35 --> +101 elements