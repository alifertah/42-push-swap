/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 22:38:34 by alfertah          #+#    #+#             */
/*   Updated: 2022/07/01 22:38:35 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	routes(t_list **a, t_list **b, t_data *data)
{
	if (data->len == 2)
		sort_2(a);
	else if (data->len == 3)
		sort_3(a);
	else if (data->len >= 4 && data->len < 40)
		sort_4_5(a, b, data);
	else if (data->len >= 40 && data->len < 200)
		sort_more(a, b, data, 5);
	else if (data->len >= 200)
		sort_more(a, b, data, 10);
}

int	create_list(t_list **lst, t_data *data)
{
	int		i;
	t_list	*stack;
	t_list	*new;

	i = 0;
	stack = NULL;
	while (i < data->len)
	{
		new = ft_lstnew(data->int_arr[i]);
		if (!new)
			return (0);
		ft_lstadd_back(&stack, new);
		i++;
	}
	*lst = stack;
	return (1);
}

int	main(int c, char **v)
{
	t_data	data;
	t_list	*a;
	t_list	*b;

	if (c == 1)
		return (0);
	checker(&data, c, v);
	if (is_sorted(&data) == 0)
		return (0);
	if (create_list(&a, &data) == 0)
	{
		free_all(&a, &b, &data);
		return (0);
	}
	sort_index(&a, &data);
	routes(&a, &b, &data);
	free_all(&a, &b, &data);
	return (0);
}
