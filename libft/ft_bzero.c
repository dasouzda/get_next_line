/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:17:59 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/13 16:18:00 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

// int main(int ag, char **av)
// {
// 	char s[] = "je tente";

//     ft_bzero(s, sizeof(char) * 8);
//     printf("Premiere test: %s\n", s);

// 	bzero(s, sizeof(char) * 8 );
// 	printf("Avec la vraie fonction: %s\n", s);
// 	return (0);
// }

// La fonction bzero remplit les n premiers octets de la zone mémoire
// pointée par s avec des zéros, effaçant ainsi cette portion de mémoire.
