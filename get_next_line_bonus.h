/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:41:36 by dasouzda          #+#    #+#             */
/*   Updated: 2025/01/22 18:41:37 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# include <fcntl.h>  //pour open()
# include <stdio.h>  //pour printf()
# include <stdlib.h> //pour malloc()
# include <unistd.h> //pour read()

char	*get_next_line(int fd);
char	*ft_strcjoin(char *line, char *buffer, char c);
int		ft_strclen(char *str, char c);
char	*ft_strcdup(char *buffer, char c);
int		ft_strchr(char *buffer, char c);
void	ft_clean(char *buffer);
void	*ft_memset(void *s, int c, size_t n);

#endif