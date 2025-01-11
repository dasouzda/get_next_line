/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:32:34 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/18 12:13:11 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ischarstr(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_startstrlen(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		if (ft_ischarstr(s1[i], set))
			count++;
		if (!ft_ischarstr(s1[i], set))
			return (count);
		i++;
	}
	return (count);
}

int	ft_endtstrlen(char const *s1, char const *set)
{
	int	lenght;
	int	count;

	lenght = ft_strlen(s1) - 1;
	count = 0;
	while (lenght >= 0)
	{
		if (ft_ischarstr(s1[lenght], set))
		{
			count++;
		}
		if (!ft_ischarstr(s1[lenght], set))
			return (count);
		lenght--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		newlenght;
	int		i;
	int		j;
	int		k;

	i = ft_startstrlen(s1, set);
	j = ft_endtstrlen(s1, set);
	newlenght = ft_strlen(s1) - (i + j);
	if (newlenght < 0)
		newlenght = 0;
	new_str = (char *)malloc(sizeof(char) * (newlenght + 1));
	if (!new_str)
		return (NULL);
	k = 0;
	while (k < newlenght)
	{
		new_str[k] = s1[i];
		i++;
		k++;
	}
	new_str[newlenght] = '\0';
	return (new_str);
}

// int main(void)
// {
//     char *str = "      Je suis entrain de terminer ma libft   ";
//     char *set = " ";
//     printf("%s\n\n", ft_strtrim2(str,set));
//     return(0);
// }