/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:46:35 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/09 13:46:42 by fyagbasa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	min_pos(t_stacks *stacks)
{
	int		min_p;
	int		pos;
	int		index;
	t_list	*tmp;

	min_p = 0;
	pos = 0;
	tmp = stacks->a;
	index = tmp->index;
	while (tmp)
	{
		if (tmp->index < index)
		{
			index = tmp->index;
			min_p = pos;
		}
		tmp = tmp->next;
		pos++;
	}
	return (min_p);
}

static void	send_it_to_up(t_stacks *stacks, int min_p)
{
	while (min_p--)
	{
		rotate_a(stacks, 1);
	}
}

static void	send_it_to_down(t_stacks *stacks, int min_p)
{
	while (min_p--)
	{
		reverse_a(stacks, 1);
	}
}

void	move_min_top(t_stacks *stacks)
{
	int	size;
	int	min_p;

	size = ft_lstsize(stacks->a);
	min_p = min_pos(stacks);
	if (min_p <= size / 2)
		send_it_to_up(stacks, min_p);
	else
		send_it_to_down(stacks, size - min_p);
}
