/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 16:06:30 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/12/27 16:06:41 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_next_buffer(int fd);
static char	*get_one_nl(int fd, char *remained_str);
static char	*remove_first_line(char *big_str);
static int	strlen_until_nl(char *str);
static char	*get_first_line(char *first_part);

char	*get_next_line(int fd)
{
	static char	*remained_str;
	char		*first_part;
	char		*next_part;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	next_part = read_next_buffer(fd);
	first_part = remained_str;
	if (first_part)
		remained_str = ft_strjoin(first_part, next_part);
	else
		remained_str = ft_strjoin(NULL, next_part);
	if (first_part)
		free (first_part);
	if (next_part)
		free (next_part);
	if (!remained_str)
		return (NULL);
	if (!ft_strchr(remained_str, '\n'))
		remained_str = get_one_nl(fd, remained_str);
	first_part = ft_strdup(remained_str);
	remained_str = remove_first_line(remained_str);
	first_part = get_first_line(first_part);
	return (remained_str);
}

static char	*read_next_buffer(int fd)
{
	char	*buffer;
	int		bytes_read;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read < 0 || bytes_read > BUFFER_SIZE)
	{
		free(buffer);
		return (NULL);
	}
	buffer[bytes_read] = '\0';
	return (buffer);
}

static char	*get_one_nl(int fd, char *remained_str)
{
	char	*first;
	char	*next;

	next = read_next_buffer(fd);
	if (!next)
		return (remained_str);
	while (!ft_strchr(next, '\n'))
	{
		first = remained_str;
		remained_str = ft_strjoin(first, next);
		if (first)
			free (first);
		if (next)
			free (next);
		next = read_next_buffer(fd);
		if (!next)
			return (remained_str);
	}
	first = remained_str;
	remained_str = ft_strjoin(first, next);
	if (first)
		free (first);
	if (next)
		free (next);
	return (remained_str);
}

static char	*remove_first_line(char *big_str)
{
	char	*remained_str;
	size_t	line1_len;
	size_t	big_length;

	if (!big_str)
		return (NULL);
	line1_len = strlen_until_nl(big_str);
	big_length = ft_strlen(big_str);
	remained_str = ft_substr(big_str, line1_len, (big_length - line1_len));
	if (remained_str[0] == '\0')
	{
		free (big_str);
		free (remained_str);
		return (NULL);
	}
	free (big_str);
	return (remained_str);
}

static int	strlen_until_nl(char *str)
{
	size_t	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '\n')
		{
			i++;
			break ;
		}
	}
	return (i);
}

static char	*get_first_line(char *first_part)
{
	char	*first_line;
	size_t	line1_len;
	size_t	i;

	if (!first_part || first_part[0] == '\0')
		return (NULL);
	line1_len = strlen_until_nl(first_part);
	printf("LINE1_LEN = %ld \n", line1_len);
	first_line = (char *)malloc(sizeof(char) * (line1_len + 1));
	if (!first_line)
		return (NULL);
	i = -1;
	while (++i < line1_len)
		first_line[i] = first_part[i];
	first_line[i] = '\0';
	printf("FIRST INSIDE = %s \n", first_line);
	free (first_part);
	return (first_line);
}
