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

int	ft_strspn(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

int	ft_strnjoin(char **s1, char *s2)
{
	int		i;
	int		length;
	char	*str;

	length = ft_strspn(s2, '\n');
	str = malloc(sizeof(char) * (ft_strlen(*s1) + length + 1));
	if (!str)
		return 0
	i = 0;
	while ((*s1)[i])
	{
		str[i] = (*s1)[i];
		i++;
	}
	free(*s1);
	while (*s2 && *s2 != '\n')
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	*s1 = str;
	return length;
}

char	*get_next_line(int fd)
{
	char buffer[BUFFER_SIZE + 1];
	char *line;
	static char *tmp;

	if (fd < 0)
        return NULL;
	// line = NULL;
	line = malloc(1);
	line[0] = '\0';
	ft_bzero(buffer, BUFFER_SIZE + 1);
	while (read(fd, buffer, BUFFER_SIZE) > 0)
    {
		if (ft_strnjoin(&line, buffer) != BUFFER_SIZE)
		{
			break;
		}
    }
	return (line);
}