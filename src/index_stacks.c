/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:23:45 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/09 13:46:31 by fyagbasa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	*make_sort_arr(t_stacks *stacks, int size)
{
	t_list	*now;
	int		*arr;
	int		c;

	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	now = stacks->a;
	c = 0;
	while (now)
	{
		arr[c] = now->val;
		now = now->next;
		c++;
	}
	bubble_sort(arr, size);
	return (arr);
}

void	stack_index(t_stacks *stacks)
{
	t_list	*now;
	int		*arr;
	int		c;

	if (ft_lstsize(stacks->a) == 1)
	{
		stacks->a->index = 0;
		return ;
	}
	arr = make_sort_arr(stacks, ft_lstsize(stacks->a));
	now = stacks->a;
	while (now)
	{
		c = -1;
		while (++c < ft_lstsize(stacks->a))
		{
			if (now->val == arr[c])
			{
				now->index = c;
				break ;
			}
		}
		now = now->next;
	}
	free(arr);
}
