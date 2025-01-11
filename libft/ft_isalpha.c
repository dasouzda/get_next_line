/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:46:30 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/08 13:13:28 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
// int main(int argc, char **argv)
// {
//     if (argc > 1)
//    {
// 		printf("Ma fonction: %d\n", ft_isalpha(argv[1][0]));
// 		printf("La vraie fonction: %d\n", isalpha(argv[1][0]));
//    }
//    return (0);
// }

//the function tests for any character for which isupper or is lower is true.