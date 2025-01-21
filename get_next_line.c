/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:02:12 by dasouzda          #+#    #+#             */
/*   Updated: 2025/01/10 19:47:46 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Comme strlen, mais copie tant que on a pas atteints \0 OU le caractère c inclus (dans get_next_line, \n)
int		ft_strclen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		i++;
	return i;
}

// Comme strndup, mais cette fois, copie tant que on a pas atteints \0 OU le caractère c inclus (dans get_next_line, \n)
char	*ft_strcdup(char *buffer, char c)
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
	return str;
}

char	*ft_strcjoin(char *line, char *buffer, char c)
{
	char	*new_line;
	int		i;

	// Si line est vide, je duplique buffer. Simple.
	// Ça permet d'initialiser line pour la première boucle lors d'une nouvelle utilisation de get_next_line
	if (!line)
		return (ft_strcdup(buffer, c));
	new_line = malloc(sizeof(char) * (ft_strclen(line, c) + ft_strclen(buffer, c) + 1));
	if (!new_line)
		return (NULL);
	i = 0;
	while (line[i])
	{
		new_line[i] = line[i];
		i++;
	}
	free(line);
	while (*buffer && *buffer != c)
	{
		new_line[i] = *buffer;
		buffer++;
		i++;
	}
	if (*buffer == c)
	{
		new_line[i] = '\n';
		i++;
	}
	new_line[i] = '\0';
	return (new_line);
}

int		ft_strchr(char *buffer, char c)
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
	static char buffer[BUFFER_SIZE + 1];
	char		*line;
	int			nbytes;

	// On vérifie que: fd soit pas null / BUFFER_SIZE soit pas null / le fichier soit readable
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
        return (NULL);
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
			break;
		}
		nbytes = read(fd, buffer, BUFFER_SIZE);
		buffer[nbytes] = '\0';
	}
    return (line);
}