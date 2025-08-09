/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:08:41 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/09 13:33:43 by fyagbasa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	push_b(t_stacks *stacks)
{
	t_list	*tmp;

	if (!stacks->a)
		return ;
	tmp = stacks->a->next;
	ft_lstadd_front(&stacks->b, stacks->a);
	stacks->a = tmp;
	ft_printf("pb\n");
}

void	push_a(t_stacks *stacks)
{
	t_list	*tmp;

	if (!stacks->b)
		return ;
	tmp = stacks->b->next;
	ft_lstadd_front(&stacks->a, stacks->b);
	stacks->b = tmp;
	ft_printf("pa\n");
}
