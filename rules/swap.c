/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:26:57 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/09 13:36:18 by fyagbasa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	swap_a(t_stacks *stacks, int w)
{
	int	tmpval;
	int	tmpind;

	if (!stacks->a && !stacks->a->next)
		return ;
	tmpval = stacks->a->val;
	tmpind = stacks->a->index;
	stacks->a->val = stacks->a->next->val;
	stacks->a->index = stacks->a->next->index;
	stacks->a->next->index = tmpind;
	stacks->a->next->val = tmpval;
	if (w)
		ft_printf("sa\n");
}

void	swap_b(t_stacks *stacks, int w)
{
	int	tmpval;
	int	tmpind;

	if (!stacks->b && !stacks->b->next)
		return ;
	tmpval = stacks->b->val;
	tmpind = stacks->b->index;
	stacks->b->val = stacks->b->next->val;
	stacks->b->index = stacks->b->next->index;
	stacks->b->next->index = tmpind;
	stacks->b->next->val = tmpval;
	if (w)
		ft_printf("sb\n");
}

void	swap_tog(t_stacks *stacks)
{
	swap_a(stacks, 0);
	swap_b(stacks, 0);
	ft_printf("ss\n");
}
