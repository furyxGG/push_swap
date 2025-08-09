/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:09:13 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/09 13:52:53 by fyagbasa         ###   ########.tr       */
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
	t_list	*tmp2;
	t_list	*tmp3;

	tmp = stacks->a->index;
	tmp2 = stacks->a->next->index;
	tmp3 = stacks->a->next->next->index;
	if (tmp2 > tmp3 && tmp3 > tmp)
	{
		reverse_a(stacks, 1);
		swap_a(stacks, 1);
	}
	else if (tmp3 > tmp && tmp > tmp2)
		swap_a(stacks, 1);
	else if (tmp2 > tmp && tmp > tmp3)
		reverse_a(stacks, 1);
	else if (tmp > tmp2 && tmp2 > tmp3)
	{
		rotate_a(stacks, 1);
		swap_a(stacks, 1);
	}
	else if (tmp > tmp3 && tmp3 > tmp2)
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
