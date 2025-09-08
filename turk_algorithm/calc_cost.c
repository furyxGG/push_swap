/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:29:33 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/09 13:55:16 by fyagbasa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

static int	calc_rot_cost(int pos, int size)
{
	if (pos <= size / 2)
		return (pos);
	return (size - pos);
}

int	calc_to_cheap_send_b(t_stacks *stacks, int index)
{
	int	pos_a;
	int	pos_b;
	int	cost_a;
	int	cost_b;

	pos_a = get_pos(stacks->a, index);
	pos_b = get_target_in_b(stacks, index);
	cost_a = calc_rot_cost(pos_a, ft_lstsize(stacks->a));
	cost_b = calc_rot_cost(pos_b, ft_lstsize(stacks->b));
	if ((pos_a <= ft_lstsize(stacks->a) / 2
			&& pos_b <= ft_lstsize(stacks->b) / 2)
		|| (pos_a > ft_lstsize(stacks->a) / 2
			&& pos_b > ft_lstsize(stacks->b) / 2))
	{
		if (cost_a > cost_b)
			return (cost_a + 1);
		return (cost_b + 1);
	}
	return (cost_a + cost_b + 1);
}

int	calc_to_cheap_send_a(t_stacks *stacks, int index)
{
	int	pos_a;
	int	pos_b;
	int	cost_a;
	int	cost_b;

	pos_b = get_pos(stacks->b, index);
	pos_a = get_target_in_a(stacks, index);
	cost_b = calc_rot_cost(pos_b, ft_lstsize(stacks->b));
	cost_a = calc_rot_cost(pos_a, ft_lstsize(stacks->a));
	if ((pos_a <= ft_lstsize(stacks->a) / 2
			&& pos_b <= ft_lstsize(stacks->b) / 2)
		|| (pos_a > ft_lstsize(stacks->a) / 2
			&& pos_b > ft_lstsize(stacks->b) / 2))
	{
		if (cost_a > cost_b)
			return (cost_a + 1);
		return (cost_b + 1);
	}
	return (cost_a + cost_b + 1);
}
