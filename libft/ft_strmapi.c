/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:19:56 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/18 14:08:41 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	if (!f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char    f(unsigned int i, char c)
// {
//     if (i % 2 == 0)
//         c = '#';
//     return (c);
// }

// int     main(void)
// {
//     char *str = "Je suis sure qu'on va bientot partir de saint Denis";
//     char *result = ft_strmapi(str, &f);
//     printf("Ma nouvelle chaine: %s\n", result);
//     return(0);
// }