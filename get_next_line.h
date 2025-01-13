/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:18:09 by dasouzda          #+#    #+#             */
/*   Updated: 2025/01/10 19:38:56 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //pour read()
#include <stdlib.h> //pour malloc()
#include <fcntl.h> //pour open()
#include <stdio.h> //pour printf()
#include "./libft/libft.h"

#define BUFFER_SIZE 10 //taille de mon buffer

char    *get_next_line(int fd);