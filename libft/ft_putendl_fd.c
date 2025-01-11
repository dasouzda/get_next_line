/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:44 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/18 13:58:34 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		lenght;
	char	c;

	c = '\n';
	if (!s)
		return ;
	lenght = ft_strlen(s);
	write(fd, s, lenght);
	write(fd, &c, 1);
}
