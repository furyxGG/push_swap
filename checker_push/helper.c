/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 01:29:28 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/16 01:57:44 by fyagbasa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push_b_checker(t_stacks *stacks)
{
	t_list	*tmp;

	if (!stacks->a)
		return ;
	tmp = stacks->a->next;
	ft_lstadd_front(&stacks->b, stacks->a);
	stacks->a = tmp;
}

void	push_a_checker(t_stacks *stacks)
{
	t_list	*tmp;

	if (!stacks->b)
		return ;
	tmp = stacks->b->next;
	ft_lstadd_front(&stacks->a, stacks->b);
	stacks->b = tmp;
}

void	swap_tog_checker(t_stacks *stacks)
{
	swap_a(stacks, 0);
	swap_b(stacks, 0);
}

void	rotate_tog_checker(t_stacks *stacks)
{
	rotate_a(stacks, 0);
	rotate_b(stacks, 0);
}

void	reverse_tog_checker(t_stacks *stacks)
{
	reverse_a(stacks, 0);
	reverse_b(stacks, 0);
}
