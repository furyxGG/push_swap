/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:09:13 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/06 18:09:13 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stacks *stacks)
{
	if (stacks->a->index > stacks->a->next->index)
		swap_a(stacks, 1);
}

void	sort_three(t_stacks *stacks)
{
	t_list	*tmp;

	tmp = stacks->a;
	if (tmp->next->index > tmp->next->next->index && tmp->next->next->index > tmp->index)
	{
		reverse_a(stacks, 1);
		swap_a(stacks, 1);
	}
	else if (tmp->next->next->index > tmp->index && tmp->index > tmp->next->index)
		swap_a(stacks, 1);
	else if (tmp->next->index > tmp->index && tmp->index > tmp->next->next->index)
		reverse_a(stacks, 1);
	else if (tmp->index > tmp->next->index && tmp->next->index > tmp->next->next->index)
	{
		rotate_a(stacks, 1);
		swap_a(stacks, 1);
	}
	else if (tmp->index > tmp->next->next->index && tmp->next->next->index > tmp->next->index)
		rotate_a(stacks, 1);
}

void	sort_four_five(t_stacks *stacks)
{
	if (!is_sorted(stacks))
	{
		while (ft_lstsize(stacks->a) > 3)
		{
			move_min_top(stacks);
			push_b(stacks);
		}
		sort_three(stacks);
		while (ft_lstsize(stacks->b) > 0)
		{
			push_a(stacks);
		}
	}
}