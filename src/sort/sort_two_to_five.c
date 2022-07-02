/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_to_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 22:37:42 by alfertah          #+#    #+#             */
/*   Updated: 2022/07/01 22:37:43 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_2(t_list **lst)
{
	t_list	*t;

	t = *lst;
	if (t->data > t->next->data)
		sa(lst);
}

void	sort_3(t_list **lst)
{
	t_list	*n0;
	t_list	*n1;
	t_list	*n2;

	n0 = *lst;
	n1 = n0->next;
	n2 = n1->next;
	if (n0->data > n1->data && n0->data < n2->data)
		sa(lst);
	else if (n0->data > n1->data && n1->data > n2->data)
	{
		sa(lst);
		rra(lst);
	}
	else if (n0->data > n1->data && n1->data < n2->data)
		ra(lst);
	else if (n0->data < n1->data && n1->data > n2->data
		&& n0->data < n2->data)
	{
		sa(lst);
		ra(lst);
	}
	else if (n0->data < n1->data && n1->data > n2->data)
		rra(lst);
}

void	sort_4_5(t_list **a, t_list **b, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = data->len - 3;
	while (i < j)
	{
		if (!path(a, data))
			while ((*a)->index != i)
				ra(a);
		else
			while ((*a)->index != i)
				rra(a);
		pb(a, b);
		i++;
	}
	sort_3(a);
	while (j > 0)
	{
		pa(b, a);
		j--;
	}
}
