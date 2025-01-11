/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:20:27 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/18 13:43:59 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

// int main(int argc, char **argv)
// {
//     int  result;
//     if (argc > 1)
//     {
//         result = ft_toupper(argv[1][0]);
//         if (result >= 0 && result <= 127)
//             ft_putchar((char)result);
//     }
//     return(0);
// }