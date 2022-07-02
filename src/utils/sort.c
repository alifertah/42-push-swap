/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 22:38:18 by alfertah          #+#    #+#             */
/*   Updated: 2022/07/01 22:38:19 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	set_index(t_list **lst, t_data *data)
{
	t_list	*list;
	int		i;

	list = *lst;
	while (list)
	{
		i = 0;
		while (i < data->len)
		{
			if (list->data == data->int_arr[i])
				list->index = i;
			i++;
		}
		list = list->next;
	}
}

void	sort_index(t_list **lst, t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < data->len - 1)
	{
		j = i + 1;
		while (j < data->len)
		{
			if (data->int_arr[i] > data->int_arr[j])
			{
				tmp = data->int_arr[i];
				data->int_arr[i] = data->int_arr[j];
				data->int_arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	set_index(lst, data);
}

int	get_min(t_list **lst)
{
	t_list	*tmp;
	int		min;

	tmp = *lst;
	min = tmp->index;
	while (tmp)
	{
		if (min > tmp->index)
		{
			min = tmp->index;
		}
		tmp = tmp->next;
	}
	return (min);
}

int	path(t_list **lst, t_data *data)
{
	int		i;
	int		y;
	t_list	*list;

	i = 0;
	y = data->len / 2;
	list = *lst;
	while (list)
	{
		if (list->index == get_min(lst))
		{
			if (i > y)
				return (1);
			else
				break ;
		}
		list = list->next;
		i++;
	}
	return (0);
}
