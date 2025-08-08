/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 17:26:37 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/08 17:26:37 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

static void	rotate_alone_a(t_stacks *stacks, int pos_a)
{
	if (pos_a <= ft_lstsize(stacks->a) / 2)
	{
		while (pos_a > 0)
		{
			rotate_a(stacks, 1);
			pos_a--;
		}
	}
	else
	{
		pos_a = ft_lstsize(stacks->a) - pos_a;
		while (pos_a > 0)
		{
			reverse_a(stacks, 1);
			pos_a--;
		}
		
	}
}

static void	rotate_alone_b(t_stacks *stacks, int pos_b)
{
	if (pos_b <= ft_lstsize(stacks->b) / 2)
	{
		while (pos_b > 0)
		{
			rotate_b(stacks, 1);
			pos_b--;
		}
	}
	else
	{
		pos_b = ft_lstsize(stacks->b) - pos_b;
		while (pos_b > 0)
		{
			reverse_b(stacks, 1);
			pos_b--;
		}
		
	}
}

void	rotate_tog_trk(t_stacks *stacks, int pos_a, int pos_b)
{
	if (pos_a <= ft_lstsize(stacks->a) / 2 && pos_b <= ft_lstsize(stacks->b) / 2)
	{
		while (pos_a > 0 && pos_b > 0)
		{
			rotate_tog(stacks);
			pos_a--;
			pos_b--;
		}
		while (pos_a > 0)
		{
			rotate_a(stacks, 1);
			pos_a--;
		}
		while (pos_b > 0)
		{
			rotate_b(stacks, 1);
			pos_b--;
		}
	}
	else if (pos_a > ft_lstsize(stacks->a) / 2 && pos_b > ft_lstsize(stacks->b) / 2)
	{
		pos_a = ft_lstsize(stacks->a) - pos_a;
		pos_b = ft_lstsize(stacks->b) - pos_b;
		while (pos_a > 0 && pos_b > 0)
		{
			reverse_tog(stacks);
			pos_a--;
			pos_b--;
		}
		while (pos_a > 0)
		{
			reverse_a(stacks, 1);
			pos_a--;
		}
		while (pos_b > 0)
		{
			reverse_b(stacks, 1);
			pos_b--;
		}
	}
	else
	{
		rotate_alone_a(stacks, pos_a);
		rotate_alone_b(stacks, pos_b);
	}
}