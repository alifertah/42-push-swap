/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 22:37:37 by alfertah          #+#    #+#             */
/*   Updated: 2022/07/01 22:37:38 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_back(t_list **a, t_list **b, t_data *data)
{
	int		sort_pos;
	int		pos;
	int		pos_nd;

	sort_pos = data->len - 1;
	while (sort_pos > 0)
	{
		pos = get_pos(*b, sort_pos);
		pos_nd = get_pos(*b, sort_pos - 1);
		if (get_min_dis(sort_pos, pos) <= get_min_dis(sort_pos, pos_nd))
		{
			take_to_top(b, pos, sort_pos, sort_pos);
			pa(b, a);
		}
		else
		{
			take_to_top(b, pos_nd, sort_pos - 1, sort_pos);
			pa(b, a);
			take_to_top(b, pos, sort_pos, sort_pos);
			pa(b, a);
			sa(a);
			sort_pos--;
		}
		sort_pos--;
	}
}

void	move_pnd_push(t_list **a, t_list **b, int n, int mid)
{
	t_list				*tmp;
	int					i;
	static int			already_rb;

	i = 0;
	while (i <= n)
	{
		if (already_rb == 1)
			rr(a, b);
		else
			ra(a);
		already_rb = 0;
		i++;
	}
	if (already_rb == 1)
		rb(b);
	already_rb = 0;
	pb(a, b);
	tmp = *b;
	if (ft_lstsize(tmp) > 1 && tmp->index <= mid)
		already_rb = 1;
}

void	scan_a(t_list **a, t_list **b, int z, int d)
{
	t_list	*start;
	int		i;

	start = *a;
	i = -1;
	while (start && start->index > z)
	{
		start = start->next;
		i++;
	}
	move_pnd_push(a, b, i, z - d / 2);
}

void	sort_more(t_list **a, t_list **b, t_data *data, int chunk)
{
	int	z;
	int	i;
	int	d;

	i = 0;
	z = data->len / chunk;
	d = data->len / chunk;
	while (ft_lstsize(*a))
	{
		scan_a(a, b, z - 1, d);
		if (z - 1 == i)
			z += d;
		i++;
	}
	push_back(a, b, data);
	if (ft_lstsize(*b) == 1)
		pa(b, a);
}
