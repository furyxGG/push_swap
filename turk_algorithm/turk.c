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
	push_b(stacks);
	push_b(stacks);
	ft_printf("%d", get_target_in_a(stacks, stacks->a->index));
}