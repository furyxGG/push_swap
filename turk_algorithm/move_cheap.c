/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_cheap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 17:14:09 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/08 17:14:09 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

void	move_cheap_to_b(t_stacks *stacks)
{
	t_list	*tmp;
	int		cost;
	int		index;
	int		mcost;
	int		pos_a;
	int		pos_b;

	tmp = stacks->a;
	mcost = INT_MAX;
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
	pos_a = get_pos(stacks->a, index);
	pos_b = get_target_in_b(stacks, index);
	rotate_tog_trk(stacks, pos_a, pos_b);
	push_b(stacks);
}

void	move_cheap_to_a(t_stacks *stacks)
{
	t_list	*tmp;
	int		cost;
	int		index;
	int		mcost;
	int		pos_a;
	int		pos_b;

	tmp = stacks->b;
	mcost = INT_MAX;
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
	pos_b = get_pos(stacks->b, index);
	pos_a = get_target_in_a(stacks, index);
	rotate_tog_trk(stacks, pos_a, pos_b);
	push_a(stacks);
}