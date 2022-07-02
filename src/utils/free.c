/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 22:38:09 by alfertah          #+#    #+#             */
/*   Updated: 2022/07/01 22:38:10 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	free_list(t_list **lst)
{
	t_list	*tmp;

	if (!*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
}

void	free_all(t_list **a, t_list **b, t_data *data)
{
	int	i;

	free_list(a);
	free_list(b);
	i = 0;
	while (data->str_arr[i])
	{
		free(data->str_arr[i]);
		i++;
	}
	free(data->str_arr);
	free(data->int_arr);
}
