/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:28:56 by dasouzda          #+#    #+#             */
/*   Updated: 2025/01/17 12:26:13 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    int fd = open("text.txt", O_RDONLY);
    char *line = get_next_line(fd);
    printf("%s\n", line);
    char *line2 = get_next_line(fd);
    printf("%s\n", line2);
    char *line3 = get_next_line(fd);
    printf("%s\n", line3);
    char *line4 = get_next_line(fd);
    printf("%s\n", line4);
    char *line5 = get_next_line(fd);
    printf("%s\n", line5);
    char *line6 = get_next_line(fd);
    printf("%s\n", line6);
    close(fd);
    return (0);
}