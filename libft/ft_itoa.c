/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:11 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/21 12:59:26 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countchar(int n, int sign)
{
	int	lenght;

	lenght = 0;
	while ((n) > 0)
	{
		n = n / 10;
		lenght++;
	}
	if (sign == -1)
		lenght = lenght + 1;
	return (lenght);
}

void	ft_extraction(char *str, int i, int n)
{
	while (i > 0)
	{
		str[i - 1] = '0' + (n % 10);
		n = n / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		sign;
	int		i;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	i = ft_countchar(n, sign);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	ft_extraction(str, i, n);
	if (sign == -1)
		str[0] = '-';
	return (str);
}
