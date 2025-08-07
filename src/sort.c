/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:13:43 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/06 18:13:43 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stacks *stacks)
{
	int	size;

	size = ft_lstsize(stacks->a);
	if (size == 2)
		sort_two(stacks);
	else if (size == 3)
		sort_three(stacks);
	else if (size == 4 || size == 5)
		sort_four_five(stacks);
}