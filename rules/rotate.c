/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:39:55 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/09 13:34:35 by fyagbasa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	rotate_a(t_stacks *stacks, int w)
{
	t_list	*tmp;
	t_list	*last;

	if (!stacks->a || !stacks->a->next)
		return ;
	last = ft_lstlast(stacks->a);
	tmp = stacks->a;
	stacks->a = stacks->a->next;
	last->next = tmp;
	tmp->next = NULL;
	if (w)
		ft_printf("ra\n");
}

void	rotate_b(t_stacks *stacks, int w)
{
	t_list	*tmp;
	t_list	*last;

	if (!stacks->b || !stacks->b->next)
		return ;
	last = ft_lstlast(stacks->b);
	tmp = stacks->b;
	stacks->b = stacks->b->next;
	last->next = tmp;
	tmp->next = NULL;
	if (w)
		ft_printf("rb\n");
}

void	rotate_tog(t_stacks *stacks)
{
	rotate_a(stacks, 0);
	rotate_b(stacks, 0);
	ft_printf("rr\n");
}
