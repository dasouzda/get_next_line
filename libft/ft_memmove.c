/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:33 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/21 13:15:42 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	if (dest < src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
		return (dest);
	}
	else if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dest);
}

// La fonction memmove copie un bloc de mémoire d'une source à une destination,
//	en gérant correctement les chevauchements potentiels
// entre les zones mémoire source et destination. 
//Elle effectue la copie de manière 
//à ne pas corrompre les données,même si les zones
// se chevauchent.
// boucle 1: Si la destination (dst) est avant la source (src) dans 
//la mémoire  il n'y a 
//pas de risque d'écraser les données lors de la copie.
// boucle 2 : /Pour éviter de corrompre les données lors du chevauchement,
//	copier en commençant par la fin et en remontant vers le début.
// Cela permet de s'assurer
// que les données que je dois encore copier ne sont pas écrasées.
