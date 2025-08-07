/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:01:40 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/07 17:01:40 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    prepare_b(t_stacks *stacks)
{
    push_b(stacks);
    if (ft_lstsize(stacks->a) > 3)
        push_b(stacks);
}

int		get_pos(t_list *list, int index)
{
	int		pos;
	t_list	*tmp;

	pos = 0;
	tmp = list;
	while (tmp)
	{
		if (tmp->index == index)
		{
			return (pos);
		}
		tmp = tmp->next;
		pos++;
	}
	return (-1);
}