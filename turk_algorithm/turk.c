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

void	turk(t_stacks *stacks)
{
	push_b(stacks);
	push_b(stacks);
	while (ft_lstsize(stacks->a) > 3)
		move_cheap_to_b(stacks);
	sort_three(stacks);
	while (stacks->b)
		move_cheap_to_a(stacks);
	move_min_top(stacks);
}