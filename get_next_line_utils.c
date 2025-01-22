/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:59:38 by dasouzda          #+#    #+#             */
/*   Updated: 2025/01/22 17:00:37 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Comme strlen,mais copie tant que on a pas atteints \0 OU le caractère c inclus (dans get_next_line,\n)
int	ft_strclen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		i++;
	return (i);
}

// Comme strndup, mais cette fois,copie tant que on a pas atteints \0 OU le caractère c inclus (dans get_next_line,\n)
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
	return (str);
}

int	ft_strchr(char *buffer, char c)
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