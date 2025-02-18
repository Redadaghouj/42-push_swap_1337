/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:17:42 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/18 15:49:22 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	*free_buffer(char **buffer, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(buffer[i]);
		i++;
	}
	free(buffer);
	return (NULL);
}

static int	count_words(char const *str, char c)
{
	int	i;
	int	is_charset;
	int	count;

	i = 0;
	count = 0;
	is_charset = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			is_charset = 0;
		else if (!(str[i] == c) && !is_charset)
		{
			count++;
			is_charset = 1;
		}
		i++;
	}
	return (count);
}

static char	*extract_word(char const *str, char c)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	i = 0;
	while (!(str[len] == c) && str[len] != '\0')
		len++;
	word = (char *) malloc(sizeof (char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	int		i;

	if (!s)
		return (NULL);
	buffer = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!buffer)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (!(*s == c))
		{
			buffer[i] = extract_word(s, c);
			if (!buffer[i])
				return (free_buffer(buffer, i));
			s += ft_strlen(buffer[i]);
			i++;
		}
		else
			s++;
	}
	buffer[i] = NULL;
	return (buffer);
}
