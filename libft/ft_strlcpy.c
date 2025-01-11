/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:19:51 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/18 12:49:41 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

// La fonction ft_strlcpy copie jusqu'à dstsize
//- 1 caractères de la chaîne source (src) vers 
//la chaîne de destination (dest)
// et termine cette dernière par un caractère nul (\0).

// Si la taille de la destination (dstsize) est 0,
//la fonction ne copie aucun caractère et retourne 
//uniquement la longueur totale 
//de la chaîne source (src).

// Sinon, elle copie les caractères de src dans dest,
//tout en veillant à ce que dest soit terminée correctement 
//par un caractère nul.

// La longueur totale de src est toujours retournée,
// peu importe la taille de dstsize.
// La chaîne dest est terminée par un caractère nul seulement si 
//dstsize est supérieur à 0.
// Lorsque dstsize est 0, aucun caractère n'est copié dans dest.