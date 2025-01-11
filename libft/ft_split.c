/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:19:12 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/21 12:59:59 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordscount(char const *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

int	ft_strlenuntil(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	*ft_strndup(char const *s, int lenght)
{
	char	*str;
	int		i;

	str = ft_calloc((lenght + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		lenght;
	int		wordscount;
	char	**tab;

	wordscount = ft_wordscount(s, c);
	tab = ft_calloc((wordscount + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			lenght = ft_strlenuntil(s, c);
			tab[i] = ft_strndup(s, lenght);
			s = s + lenght;
			i++;
		}
		else
			s++;
	}
	tab[i] = NULL;
	return (tab);
}
