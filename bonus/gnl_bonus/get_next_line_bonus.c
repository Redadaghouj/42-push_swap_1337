/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:24:11 by mdaghouj          #+#    #+#             */
/*   Updated: 2025/02/17 17:05:37 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*find_newline(char **stored_line, int end_line, char **buffer, int flag)
{
	char	*tmp_buff;
	char	*line;

	if (flag)
	{
		tmp_buff = ft_substr(*buffer, 0, end_line + 1);
		line = ft_strjoin(*stored_line, tmp_buff);
		free(tmp_buff);
		tmp_buff = ft_substr(*buffer, end_line + 1,
				ft_strlen(*buffer) - end_line - 1);
	}
	else
	{
		line = ft_substr(*stored_line, 0, end_line + 1);
		tmp_buff = ft_substr(*stored_line, end_line + 1,
				ft_strlen(*stored_line) - end_line - 1);
	}
	free(*stored_line);
	*stored_line = tmp_buff;
	free(*buffer);
	return (line);
}

char	*end_of_file(char **buffer, char **stored_line)
{
	char	*tmp_buff;

	free(*buffer);
	if (*stored_line && **stored_line == '\0')
	{
		free(*stored_line);
		*stored_line = NULL;
		return (NULL);
	}
	tmp_buff = *stored_line;
	*stored_line = NULL;
	return (tmp_buff);
}

char	*free_vars(char **stored_line, char **buffer, int flag)
{
	char	*tmp_buff;

	if (flag)
	{
		free(*stored_line);
		*stored_line = NULL;
		free(*buffer);
	}
	else
	{
		tmp_buff = ft_strjoin(*stored_line, *buffer);
		free(*stored_line);
		*stored_line = tmp_buff;
	}
	return (NULL);
}

int	check_error(char **buffer, int fd)
{
	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	*buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (*buffer == NULL)
		return (0);
	return (1);
}

char	*get_next_line(int fd)
{
	int			bytes_read;
	static char	*stored_line;
	int			end_line;
	char		*buffer;

	end_line = -1;
	if (!check_error(&buffer, fd))
		return (NULL);
	while (1)
	{
		if (stored_line)
			end_line = check_line(ft_strlen(stored_line) - 1, stored_line);
		if (end_line != -1)
			return (find_newline(&stored_line, end_line, &buffer, 0));
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free_vars(&stored_line, &buffer, 1));
		buffer[bytes_read] = '\0';
		if (bytes_read == 0)
			return (end_of_file(&buffer, &stored_line));
		end_line = check_line(bytes_read, buffer);
		if (end_line != -1)
			return (find_newline(&stored_line, end_line, &buffer, 1));
		free_vars(&stored_line, &buffer, 0);
	}
}
