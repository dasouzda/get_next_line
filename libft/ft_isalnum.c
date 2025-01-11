/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:40:16 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/18 13:55:08 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
// int main(int argc, char **argv)
// {
//     if (argc > 1)
//     {
//  		printf("Ma fonction: %d\n", ft_isalnum(argv[1][0]));
// 		printf("La vraie fonction: %d\n", isalnum(argv[1][0]));
//    }
// 	return (0);
// }

//the fonction tests for any characteres for which 
//ft_isalpha or ft_isdigit is true
