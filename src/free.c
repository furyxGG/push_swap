/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 01:23:43 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/16 01:57:13 by fyagbasa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks(t_stacks *stacks)
{
	t_list	*tmp_a;
	t_list	*tmp_b;
	t_list	*tmp;

	tmp_a = stacks->a;
	tmp_b = stacks->b;
	while (tmp_a)
	{
		tmp = tmp_a->next;
		free(tmp_a);
		tmp_a = tmp;
	}
	while (tmp_b)
	{
		tmp = tmp_b->next;
		free(tmp_b);
		tmp_b = tmp;
	}
	free(stacks);
}

void	free_lists(char **lists)
{
	int	a;

	a = 0;
	while (lists[a])
	{
		free(lists[a]);
		a++;
	}
	free(lists);
}
