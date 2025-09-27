/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 02:42:14 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/09/27 15:39:12 by fyagbasa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/push_swap.h"

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
