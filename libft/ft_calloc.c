/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:02 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/18 11:05:15 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	length;
	size_t	i;

	if (nmemb && size > SIZE_MAX / nmemb)
		return (NULL);
	length = nmemb * size;
	ptr = malloc(length);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < length)
	{
		((unsigned char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}

/*
 * La fonction calloc() alloue de la mémoire pour un nombre spécifié d'objets
 * de taille donnée (count * size). Elle initialise la mémoire allouée à zéro
 * et retourne un pointeur vers cette mémoire. Si l'allocation échoue ou si
 * count ou size est égal à zéro, elle retourne NULL.
 */