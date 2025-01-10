/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:28:56 by dasouzda          #+#    #+#             */
/*   Updated: 2025/01/10 19:48:52 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    char *line;
    int fd = open("text.txt", O_RDONLY);
    
    if (fd < 0)
        return (1);
    
    line = get_next_line(fd);
    if (line)
    {
        printf("ligne lue : %s\n", line);
        free(line);   
    }
    close(fd);
    return (0);
}