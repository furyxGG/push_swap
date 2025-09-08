/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_cheap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 17:14:09 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/09 13:59:43 by fyagbasa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

void	move_cheap_to_b(t_stacks *stacks)
{
	t_list	*tmp;
	int		cost;
	int		index;
	int		mcost;
	t_list	*tm;

	tmp = stacks->a;
	mcost = INT_MAX;
	tm = stacks->a;
	while (tmp)
	{
		cost = calc_to_cheap_send_b(stacks, tmp->index);
		if (cost < mcost)
		{
			mcost = cost;
			index = tmp->index;
		}
		tmp = tmp->next;
	}
	rotate_tog_trk(stacks, get_pos(tm, index), get_target_in_b(stacks, index));
	push_b(stacks);
}

void	move_cheap_to_a(t_stacks *stacks)
{
	t_list	*tmp;
	int		cost;
	int		index;
	int		mcost;
	t_list	*tm;

	tmp = stacks->b;
	mcost = INT_MAX;
	tm = stacks->b;
	while (tmp)
	{
		cost = calc_to_cheap_send_a(stacks, tmp->index);
		if (cost < mcost)
		{
			mcost = cost;
			index = tmp->index;
		}
		tmp = tmp->next;
	}
	rotate_tog_trk(stacks, get_target_in_a(stacks, index), get_pos(tm, index));
	push_a(stacks);
}
