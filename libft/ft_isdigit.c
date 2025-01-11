/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:40:19 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/08 13:11:11 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int main(int argc, char** argv)
// {
//     if (argc > 1)
//     {
	// 		printf("Ma fonction: %d\n", ft_isdigit(argv[1][0]));
	// 		printf("La vraie fonction: %d\n", isdigit(argv[1][0]));
//     }
//     return (0);
// }

//the function tests to see if it is a decimal character from 0 to 9