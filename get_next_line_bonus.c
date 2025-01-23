/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:57:10 by dasouzda          #+#    #+#             */
/*   Updated: 2025/01/22 19:01:57 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char	*get_next_line(int fd)
{
	static char	buffer[256][BUFFER_SIZE + 1];
	char		*line;
	int			nbytes;

	// On vérifie que: fd soit pas null / BUFFER_SIZE soit pas null/ le fichier soit readable
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		ft_memset(buffer[fd], 0, sizeof(buffer[fd]));
		return (NULL);
	}
	line = NULL;
	// On initialise nbytes à 1, pour rentrer une première dans notre boucle
	// nbtyes corresponds au nombre de byte lu par read (à la fin de la boucle)
	nbytes = 1;
	while (nbytes > 0)
	{
		if (*(buffer[fd]))
		{
			// Je concatène dans une nouvelle chaine line et buffer.
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
		buffer[fd][nbytes] = '\0';
	}
	return (line);
}

