/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 22:37:25 by alfertah          #+#    #+#             */
/*   Updated: 2022/07/01 22:37:26 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate(t_list **lst)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (ft_lstsize(*lst) <= 1)
		return ;
	tmp1 = *lst;
	tmp2 = tmp1->next;
	ft_lstadd_back(lst, tmp1);
	tmp1->next = NULL;
	tmp2->prev = NULL;
	*lst = tmp2;
}

void	ra(t_list **lst)
{
	rotate(lst);
	ft_putstr("ra\n");
}

void	rb(t_list **lst)
{
	rotate(lst);
	ft_putstr("rb\n");
}

void	rr_(t_list **lst1, t_list **lst2)
{
	rotate(lst1);
	rotate(lst2);
}

void	rr(t_list **lst1, t_list **lst2)
{
	rr_(lst1, lst2);
	ft_putstr("rr\n");
}
