/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:24:57 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/08 15:24:57 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

int	is_sorted(t_stacks *stacks)
{
	int		check;
	t_list *tmp;

	tmp = stacks->a;
	check = 0;
	while (tmp)
	{
		if (tmp->next && tmp->index > tmp->next->index)
			check = 1;
		tmp = tmp->next;
	}
	if (check != 0)
		return (0);
	return (1);
}

void	turk(t_stacks *stacks)
{
	if (is_sorted(stacks))
		return ;
	push_b(stacks);
	push_b(stacks);
	while (ft_lstsize(stacks->a) > 3)
		move_cheap_to_b(stacks);
	sort_three(stacks);
	while (stacks->b)
		move_cheap_to_a(stacks);
	move_min_top(stacks);
}