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

int main(int argc, char **argv)
{
	char		*argums = ft_calloc(1, sizeof(char));
	char		**lists;
	t_stacks	*stacks;

	if (argc < 2)
		return (0);
	while (++argv && *argv)
	{
		if (**argv)
			argums = ft_strjoin(argums, *argv);
		else
			argums = ft_strjoin(argums, "y");
	}
	lists = ft_split(argums, ' ');
	free(argums);
	stacks = create_stacks(lists);
	stack_index(stacks);

	t_list *curr = stacks->a;
	int d = 1;
	while (curr && d)
	{
		ft_printf("val: %d index: %d sira: %d\n", curr->val, curr->index, d);
		curr = curr->next;
		d++;
	}
	swap_a(stacks);
	printf("-----------------------------------");
	curr = stacks->a;
	d = 1;
	while (curr && d)
	{
		ft_printf("val: %d index: %d sira: %d\n", curr->val, curr->index, d);
		curr = curr->next;
		d++;
	}
}