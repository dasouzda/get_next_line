/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:01:49 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/18 14:11:39 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// int main(void)
// {
//     char s[] = "je tente";

//     ft_memset(s, 'G', sizeof(char) * 8);
//     printf("Premiere test: %s\n", s);

// 	memset(s, 'G', sizeof(char) * 8 );
// 	printf("Avec la vraie fonction: %s\n", s);
// 	ft_memset(s, 'A', sizeof(char) * 8 );
// 	printf("\nDeuxieme test: %s\n", s);

// 	memset(s, 'A', sizeof(char) * 8 );
// 	printf("Avec la vraie fonction: %s\n", s);
//     return (0);
// }
// La fonction memset remplit un bloc de mémoire avec une valeur donnée,
// en copiant cette valeur (convertie en octet) dans chaque position
// du bloc sur une longueur spécifiée. Elle est utilisée pour initialiser
// ou réinitialiser une zone mémoire.
