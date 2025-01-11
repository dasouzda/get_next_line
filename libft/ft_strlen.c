/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:01:41 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/18 13:43:21 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int main(int argc, char **argv)
// {
//     int result;
//     int result2;

//     if (argc > 1)
//     {
//         result = ft_strlen(argv[1]);
//         result2= strlen(argv[1]);
//         printf("Ma fonction: %d\n", result);
//         printf("La vraie fonction: %d\n", result2);
//     }
//     return (0);
// }
