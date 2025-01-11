/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:18 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/20 11:11:05 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(int ac, char **av)
// {
// 	t_list	*struct0;
// 	t_list	*struct1;
// 	t_list	*struct2;
// 	t_list	*struct3;
// 	t_list	*struct4;
// 	t_list	*struct5;
// 	t_list	*lst;

// 	struct0 = ft_lstnew("a");
// 	struct1 = ft_lstnew("b");
// 	struct2 = ft_lstnew("c");
// 	struct3 = ft_lstnew("d");
// 	struct4 = ft_lstnew("e");
// 	struct5 = ft_lstnew("f");
// 	struct0->next = struct1;
// 	struct1->next = struct2;
// 	struct2->next = struct3;
// 	struct3->next = struct4;
// 	struct4->next = struct5;
// 	struct5->next = NULL;
// 	printf("Le premier noeud:%s\n", (char *)struct0->content);
// 	lst = ft_lstlast(struct0);
// 	printf("Le dernier noeud:%s\n", (char *)lst->content);
// 	return (0);
// }

// while (lst->next)
// // tant que lst-> existe et donc tant que next n'est pas NULL