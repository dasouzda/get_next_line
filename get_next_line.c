/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:02:12 by dasouzda          #+#    #+#             */
/*   Updated: 2025/01/22 18:25:21 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strcjoin(char *line, char *buffer, char c)
{
	char	*new_line;
	int		i;

	// Si line est vide, je duplique buffer. Simple.
	// Ça permet d'initialiser line pour la première boucle lors d'une nouvelle utilisation de get_next_line
	if (!line)
		return (ft_strcdup(buffer, c));
	new_line = malloc(sizeof(char) * (ft_strclen(line, c) + ft_strclen(buffer,
					c) + 1));
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
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			nbytes;

	// On vérifie que: fd soit pas null / BUFFER_SIZE soit pas null/ le fichier soit readable
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		ft_memset(buffer, 0, sizeof(buffer));
		return (NULL);
	}
	line = NULL;
	// On initialise nbytes à 1, pour rentrer une première dans notre boucle
	// nbtyes corresponds au nombre de byte lu par read (à la fin de la boucle)
	nbytes = 1;
	while (nbytes > 0)
	{
		if (*buffer)
		{
			// Je concatène dans une nouvelle chaine line et buffer.
			line = ft_strcjoin(line, buffer, '\n');
			if (!line)
				return (NULL);
		}
		if (ft_strchr(buffer, '\n'))
		{
			ft_clean(buffer);
			break ;
		}
		nbytes = read(fd, buffer, BUFFER_SIZE);
		buffer[nbytes] = '\0';
	}
	return (line);
}
