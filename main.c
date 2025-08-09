/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 02:42:14 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/05 02:42:14 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/push_swap.h"

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

int	main(int argc, char **argv)
{
	char		*argums;
	char		**lists;
	t_stacks	*stacks;

	if (argc < 2)
		return (0);
	argums = ft_calloc(1, sizeof(char));
	while (++argv && *argv)
	{
		if (**argv)
			argums = ft_strjoin(argums, *argv);
		else
			argums = ft_strjoin(argums, "sorrynotsorry");
	}
	lists = ft_split(argums, ' ');
	free(argums);
	stacks = create_stacks(lists);
	free_lists(lists);
	stack_index(stacks);
	sort(stacks);
	free_stacks(stacks);
}