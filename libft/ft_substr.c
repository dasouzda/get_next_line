/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:20:21 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/21 13:21:45 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	char const	*new_s;
	char		*empty_str;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		empty_str = malloc(sizeof(char) * 1);
		empty_str[0] = '\0';
		return (empty_str);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	new_s = s + start;
	ft_strlcpy(str, new_s, len + 1);
	return (str);
}

// int main(void)
// {
//     char *s = "je vais coder une fonction";
//     unsigned int  start = 8;
//     size_t len = 27;

//     char * result = ft_substr(s, start, len);
//     printf("%s", result);
//     return (0);
// }

// La fonction ft_substr crée une sous-chaîne à partir de la chaîne s,
// en commençant à l'indice start et en copiant jusqu'à len caractères.
// Si start est supérieur à la longueur de s, elle retourne une chaîne vide.
// La mémoire est allouée dynamiquement,
//	et la sous-chaîne est terminée par un caractère nul (\0).
// Si malloc échoue ou si s est NULL, la fonction retourne NULL.
// verifier si la chaine est vide ou null
// Si start est supérieur à la longueur de s, elle retourne une chaîne vide
// si len est plus grand que besoin, reduire sa taille
// verifier que mon allocation a bien marché