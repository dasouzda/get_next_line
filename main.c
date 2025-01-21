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
    int fd = open("text_de_test.txt", O_RDONLY);
    
    char *line = get_next_line(fd);
    printf("%s", line);

    char *line2 = get_next_line(fd);
    printf("%s", line2);

    char *line3 = get_next_line(fd);
    printf("%s", line3);

    char *line4 = get_next_line(fd);
    printf("%s", line4);

    char *line5 = get_next_line(fd);
    printf("%s", line5);

    close(fd);
    return (0);
}