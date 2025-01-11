/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:39:05 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/25 12:34:32 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s)
	{
		if (*s == uc)
			return ((char *)s);
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (NULL);
}

// int main(int ag, char**av)
// {
//      if(ag > 1)
//      {
//         printf("La premiere occurence arrive ici --> %s\n", ft_strchr(av[1],
//		av[2][0]));
//         printf("Comparaison avec la vraie fonction --> %s\n", strchr(av[1],
//		av[2][0]));
//         return(0);
//      }
// }

// trouve la premiere occurance dans la string et conversi c en char