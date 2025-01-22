/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:57:10 by dasouzda          #+#    #+#             */
/*   Updated: 2025/01/22 17:03:54 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strclen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		i++;
	return (i);
}

{
	char	*str;
	int		length;
	int		i;

	length = ft_strclen(buffer, c);
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < length)
	{
		str[i] = buffer[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strcjoin(char *line, char *buffer, char c)
{
	char	*new_line;
	int		i;

	if (!line)
		return (ft_strcdup(buffer, c));
	new_line = malloc(sizeof(char) * (ft_strclen(line, c) + ft_strclen(buffer, c) + 1));
	if (!new_line)
		return (NULL);
	i = -1;
	while (line[++i])
		new_line[i] = line[i];
	free(line);
	while (*buffer && *buffer != c)
	{
		new_line[i] = *buffer;
		buffer++;
		i++;
	}
	if (*buffer == c)
		new_line[i++] = '\n';
	new_line[i] = '\0';
	return (new_line);
}

int	ft_strchr(char *buffer, char c)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_clean(char *buffer)
{
	int	i;
	int	j;

	j = 0;
	while (buffer[j] != '\n')
		j++;
	i = 0;
	while (buffer[j])
	{
		buffer[i] = buffer[j + 1];
		j++;
		i++;
	}
}

char	*get_next_line(int fd)
{
	static char *buffer[1065];
	char *line;
	int nbytes;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	line = NULL;
	nbytes = 1;
	while (nbytes > 0)
	{
		if (*buffer[fd])
		{ 
			line = ft_strcjoin(line, buffer[fd], '\n');
			if (!line)
				return (NULL);
		}
		if (ft_strchr(buffer[fd], '\n'))
		{
			ft_clean(buffer[fd]);
			break ;
		}
		nbytes = read(fd, buffer[fd], BUFFER_SIZE);
		(buffer[fd])[nbytes] = '\0';
	}
	return (line);
}

