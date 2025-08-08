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

int	get_pos(t_list *list, int index)
{
	int 	pos;
	t_list	*tmp;

	tmp = list;
	pos = 0;
	while (tmp)
	{
		if (tmp->index == index)
			return (pos);
		pos++;
		tmp = tmp->next;
	}
	return (-42);
}

static int	no_any_small_b(t_stacks *stacks)
{
	t_list *tmp;
	int pos;
	int big_index;
	int target_pos;

	tmp = stacks->b;
	pos = 0;
	big_index = INT_MIN;
	target_pos = 0;
	while (tmp)
	{
		if (tmp->index > big_index)
		{
			big_index = tmp->index;
			target_pos = pos;
		}
		pos++;
		tmp = tmp->next;
	}
	return (target_pos);
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
	int small_index;
	int target_pos;

	tmp = stacks->a;
	pos = 0;
	small_index = INT_MAX;
	target_pos = 0;
	while (tmp)
	{
		if (tmp->index < small_index)
		{
			small_index = tmp->index;
			target_pos = pos;
		}
		pos++;
		tmp = tmp->next;
	}
	return (target_pos);
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