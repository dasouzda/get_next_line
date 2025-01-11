/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:28 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/18 14:14:37 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

// La fonction memcmp compare les n premiers octets de deux blocs de mémoire,
// s1 et s2, et retourne un entier indiquant leur ordre lexicographique :
// un résultat négatif si s1 est inférieur à s2, zéro s'ils sont égaux,
// et un résultat positif si s1 est supérieur à s2.
// if (i == n)
// 		// ici je compare de la memoire donc contrairement a strcmp ou 
// la soustraction donnera automatiquement 0 ici il faut que je
// fasse une condition 
// specifique.
// 		return (0);