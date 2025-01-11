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

// read and store fonction
char	*read_and_store(char *line)
{
	static char	*line2[];
	
	
}

char	*get_next_line(int fd)
{
	static char *line;
	int nbytes;

	if (fd < 0 || !line)
        return NULL;
	nbytes = read(fd, line, BUFFER_SIZE);


	if(nbytes <= 0)
	{
		free(line);
		return NULL;
	}
	return (line);
}

// char	*get_next_line(int fd)
// {
// 	static char *buffer;
// 	int bytes_read;

// 	buffer = malloc(BUFFER_SIZE + 1);
// 	if (fd < 0 || !buffer)
//         return NULL;
// 	bytes_read = read(fd, buffer, BUFFER_SIZE);

// 	if(bytes_read <= 0)
// 		free(buffer);
// 		return NULL;
// 	return (buffer);
// }