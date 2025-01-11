/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:23 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/19 11:34:40 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main(int ac, char ** av)
// {
//     int result;
//     t_list *struct0;
//     t_list *struct1;
//     t_list *struct2;
//     t_list *struct3;
//     t_list *struct4;
//     t_list *struct5;
//     t_list *newstruct;

//     struct0 = ft_lstnew("a");
//     struct1 = ft_lstnew("b");
//     struct2 = ft_lstnew("c");
//     struct3 = ft_lstnew("d");
//     struct4 = ft_lstnew("e");
//     struct5 = ft_lstnew("f");
//     newstruct = ft_lstnew("#");

//     struct0->next = struct1;
//     struct1->next = struct2;
//     struct2->next = struct3;
//     struct3->next = struct4;
//     struct4->next = struct5;
//     struct5->next = NULL;

//     result = ft_lstsize(struct0);
//     printf("Number of nodes:%d\n", result);
//     return(0);
// }