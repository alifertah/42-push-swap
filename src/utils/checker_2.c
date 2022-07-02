/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 22:37:52 by alfertah          #+#    #+#             */
/*   Updated: 2022/07/01 22:37:53 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	check_numbers(t_data *data)
{
	int	i;

	i = -1;
	while (data->str_arr[++i])
	{
		if (valid_str(data->str_arr[i]) == 0)
			put_error("Error\n", data);
		data->int_arr[i] = ft_atoi(data->str_arr[i]);
		if (-2147483648 > data->int_arr[i] || 2147483647 < data->int_arr[i])
			put_error("Error\n", data);
	}
}
