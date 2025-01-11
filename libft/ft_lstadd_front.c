/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:14 by dasouzda          #+#    #+#             */
/*   Updated: 2024/11/19 12:01:12 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// void    ft_print_list(t_list *list)
// {
//     while(list)
//     {
//         printf("Content: %s\n",(char *)list->content);
//         list = list->next;
//     }
// }

// int main(int ac, char ** av)
// {
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

//     printf("Liste AVANT ajout de strut2 au début:\n");
//     ft_print_list(struct0);

//     ft_lstadd_front(&struct0, newstrut);
//     printf("Liste après ajout de strut2 au début:\n");
//     ft_print_list(struct0);
//     return(0);
// }

// new->next = *lst;
// fait pointer le pointeur next au premier noeuf de la list
//     *lst = new; //update lst et le fait pointer sur new,
// le rendant ainsi le premier neoud