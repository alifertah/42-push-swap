/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 22:37:20 by alfertah          #+#    #+#             */
/*   Updated: 2022/07/01 22:37:21 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	reverse(t_list **lst)
{
	t_list	*tmp1;
	t_list	*tmp2;
	t_list	*tmp3;

	if (ft_lstsize(*lst) <= 1)
		return ;
	tmp1 = *lst;
	tmp2 = ft_lstlast(tmp1);
	tmp3 = tmp2->prev;
	tmp1->prev = tmp2;
	tmp2->next = tmp1;
	tmp2->prev = NULL;
	tmp3->next = NULL;
	*lst = tmp2;
}

void	rra(t_list **lst)
{
	reverse(lst);
	ft_putstr("rra\n");
}

void	rrb(t_list **lst)
{
	reverse(lst);
	ft_putstr("rrb\n");
}

void	rrr_(t_list **lst1, t_list **lst2)
{
	reverse(lst1);
	reverse(lst2);
}

void	rrr(t_list **lst1, t_list **lst2)
{
	rrr_(lst1, lst2);
	ft_putstr("rrr\n");
}
