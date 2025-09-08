/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:34:30 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/09 13:34:20 by fyagbasa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

static void	nullast(t_list *stack)
{
	while (stack && stack->next && stack->next->next)
		stack = stack->next;
	stack->next = NULL;
}

void	reverse_a(t_stacks *stacks, int w)
{
	t_list	*tmp;

	if (!stacks->a || !stacks->a->next)
		return ;
	tmp = ft_lstlast(stacks->a);
	nullast(stacks->a);
	ft_lstadd_front(&stacks->a, tmp);
	if (w)
		ft_printf("rra\n");
}

void	reverse_b(t_stacks *stacks, int w)
{
	t_list	*tmp;

	if (!stacks->b || !stacks->b->next)
		return ;
	tmp = ft_lstlast(stacks->b);
	nullast(stacks->b);
	ft_lstadd_front(&stacks->b, tmp);
	if (w)
		ft_printf("rrb\n");
}

void	reverse_tog(t_stacks *stacks)
{
	reverse_a(stacks, 0);
	reverse_b(stacks, 0);
	ft_printf("rrr\n");
}
