/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:18:09 by dasouzda          #+#    #+#             */
/*   Updated: 2025/01/17 12:18:02 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h> //pour read()
#include <stdlib.h> //pour malloc()
#include <fcntl.h> //pour open()
#include <stdio.h> //pour printf()
#include "./libft/libft.h"

#define BUFFER_SIZE 5 //taille de mon buffer

char    *get_next_line(int fd);

#endif