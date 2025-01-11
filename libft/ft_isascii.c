/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:06:09 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/08 13:11:17 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main(int argc, char **argv)
// {
//     if (argc > 1)
//     {
// 		printf("Ma fonction: %d\n", ft_isascii(argv[1][0]));
// 		printf("La vraie fonction: %d\n", isascii(argv[1][0]));
// 	}
//     return (0);
// }