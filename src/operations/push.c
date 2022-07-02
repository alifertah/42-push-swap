/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 22:37:11 by alfertah          #+#    #+#             */
/*   Updated: 2022/07/01 22:37:12 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push(t_list **src, t_list **dst)
{
	t_list	*tmp;
	t_list	*tmp3;

	if (ft_lstsize(*src) == 0)
		return ;
	tmp = *src;
	tmp3 = tmp->next;
	if (ft_lstsize(*dst) == 0)
	{
		tmp->prev = NULL;
		tmp->next = NULL;
		*dst = tmp;
	}
	else
		ft_lstadd_front(dst, tmp);
	if (tmp3 != NULL)
		tmp3->prev = NULL;
	*src = tmp3;
}

void	pa(t_list **src, t_list **dst)
{
	push(src, dst);
	ft_putstr("pa\n");
}

void	pb(t_list **src, t_list **dst)
{
	push(src, dst);
	ft_putstr("pb\n");
}
