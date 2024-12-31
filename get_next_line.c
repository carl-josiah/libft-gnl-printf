/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 00:22:41 by ccastro           #+#    #+#             */
/*   Updated: 2024/12/31 16:23:04 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_clean_line(char *line)
{
	int		i;
	char	*cleaned_line;

	i = 0;
	if (line == NULL || *line == '\0')
		return (NULL);
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	cleaned_line = gnl_substr(line, 0, i + 1);
	return (cleaned_line);
}

char	*get_dirty_line(char *buf)
{
	int		i;
	char	*dirty_line;

	i = 0;
	if (buf == NULL || *buf == '\0')
		return (NULL);
	while (buf[i] != '\0' && buf[i] != '\n')
		i++;
	dirty_line = gnl_substr(buf, i + 1, gnl_strlen(buf));
	return (dirty_line);
}

int	read_line(int fd, char **dirty_line)
{
	int		bytes;
	char	*buf;
	char	*temp;

	if (BUFFER_SIZE <= 0)
		return (-1);
	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (buf == NULL)
		return (-1);
	bytes = 1;
	while (gnl_strchr(*dirty_line, '\n') == NULL && bytes > 0)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes == -1)
			return (free(buf), -1);
		if (bytes == 0)
			break ;
		buf[bytes] = '\0';
		temp = *dirty_line;
		*dirty_line = gnl_strjoin(*dirty_line, buf);
		free(temp);
	}
	return (free(buf), bytes);
}

char	*get_next_line(int fd)
{
	int				bytes;
	static char		*line;
	char			*clean_line;
	char			*temp;

	if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes = read_line(fd, &line);
	if (bytes <= 0 && line == NULL)
		return (NULL);
	clean_line = get_clean_line(line);
	temp = line;
	line = get_dirty_line(line);
	return (free(temp), clean_line);
}

// int	main(void)
// {
// 	int	fd = open("tests/text1.txt", O_RDONLY);

// 	char	*line = get_next_line(fd);
// 	printf("%s", line);
// 	free(line);
// }