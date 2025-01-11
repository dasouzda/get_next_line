/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:30 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/18 13:59:43 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char *src = "coucou";
// 	char dest[100];
// 	memset(dest, 'A', 100);

// 	printf("Ma: %s\n", (char *)ft_memcpy(dest, src, 0));
// 	printf("La: %s\n", (char *)memcpy(dest, src, 0));
// 	return (0);
// }

// La fonction memcpy copie un bloc de mémoire d'une
// source à une destination
// sans tenir compte des chevauchements potentiels entre 
//les zones mémoire source et destination.
// Elle effectue la copie de manière rapide mais peut 
//corrompre les données si les zones se chevauchent.
