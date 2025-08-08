/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:44:14 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/08 16:44:14 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

static int	no_any_small_b(t_stacks *stacks)
{
	t_list *tmp;
	int pos;
	int big_index;

	pos = -1;
	tmp = stacks->b;
	big_index = INT_MIN;
	while (tmp)
	{
		if (tmp->index > big_index)
		{
			big_index = tmp->index;
			pos++;
		}
		tmp = tmp->next;
	}
	return (pos);
}

int	get_target_in_b(t_stacks *stacks, int index)
{
	t_list	*tmp;
	int		pos;
	int		target_pos;
	int		check;

	pos = 0;
	tmp = stacks->b;
	check = INT_MIN;
	while (tmp)
	{
		if (index > tmp->index && tmp->index > check)
		{
			target_pos = pos;
			check = tmp->index;
		}
		pos++;
		tmp = tmp->next;
	}
	if (check == INT_MIN)
		target_pos = no_any_small_b(stacks);
	return (target_pos);
}

static int	no_any_big_a(t_stacks *stacks)
{
	t_list *tmp;
	int pos;
	int big_index;

	pos = -1;
	tmp = stacks->a;
	big_index = INT_MAX;
	while (tmp)
	{
		if (tmp->index < big_index)
		{
			big_index = tmp->index;
			pos++;
		}
		tmp = tmp->next;
	}
	return (pos);
}

int	get_target_in_a(t_stacks *stacks, int index)
{
	t_list	*tmp;
	int		pos;
	int		target_pos;
	int		check;

	pos = 0;
	tmp = stacks->a;
	check = INT_MAX;
	while (tmp)
	{
		if (index < tmp->index && tmp->index < check)
		{
			target_pos = pos;
			check = tmp->index;
		}
		pos++;
		tmp = tmp->next;
	}
	if (check == INT_MAX)
		target_pos = no_any_big_a(stacks);
	return (target_pos);
}

// int	calc_to_send_b(t_stacks *stacks)
// {
// 	int	cost;
// 	int	pos_a;
// 	int	pos_b;

// 	cost = 0;
// }