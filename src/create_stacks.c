/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:33:56 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/05 18:33:56 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks    *create_stacks(char **lists)
{
    t_stacks    *stacks;
    int			num;

    stacks = malloc(sizeof(t_stacks));
    if (!stacks)
        return (NULL);
    stacks->a = ft_lstnew(ft_atoi(lists[0]));
    stacks->b = NULL;
	num = 1;
    if (check_all(lists))
    {
		while (lists[num])
		{
			ft_lstadd_back(&stacks->a, ft_lstnew(ft_atoi(lists[num])));
			num++;
		}
		return (stacks);
    }
	else
		return (0);
}