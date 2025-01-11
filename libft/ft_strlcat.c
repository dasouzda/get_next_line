/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:19:48 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/18 13:10:20 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	j = 0;
	len_dst = ft_strlen((const char *)dst);
	len_src = ft_strlen(src);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (dst[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}

// ft_strlcat - Concatène jusqu'à dstsize - 1 caractères de src à la fin de dst
// et termine dst par un caractère nul ('\0').

// Si dstsize est inférieur ou égal à la longueur actuelle de dst, la fonction
// retourne la longueur totale attendue de dst concaténé avec 
//src (len_dst + len_src).
// Sinon, elle ajoute les caractères de src à la fin de dst,
//sans dépasser dstsize - 1
// caractères, et ajoute un caractère nul à la fin de dst.

// Points importants :
//  La longueur totale de dst + src est retournée pour indiquer la longueur de
//  la chaîne résultante si dstsize
// était assez grand.
//  La chaîne dst est terminée par un caractère nul 
//si dstsize est suffisant pour
//  contenir dst et src.
//  Si dstsize <= longueur de dst,
//  aucun caractère de src n'est copié et la longueur
//  totale attendue est retournée.
