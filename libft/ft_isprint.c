/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:08 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/13 16:18:09 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <unistd.h>

// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

// int main(int argc, char **argv)
// {
//     int result;
// 	int result2;

//     if (argc > 1)
//     {
//         result = ft_isprint(argv[1][0]);
//         result2 = isprint(argv[1][0]);
// 		write(1, "Ma fonction: ", 13);
// 		ft_putchar(result + 48);
// 		ft_putchar('\n');
// 		write(1, "La vraie fonction: ", 20);
// 		ft_putchar(result2 + 48);
// 		ft_putchar('\n');
//     }
//     return (0);
// }