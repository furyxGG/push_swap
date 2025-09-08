/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 19:01:57 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/16 01:57:38 by fyagbasa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	execute_stacks(char *line, t_stacks *stacks)
{
	if (ft_strnstr(line, "pa\n", 3))
		push_a_checker(stacks);
	else if (ft_strnstr(line, "pb\n", 3))
		push_b_checker(stacks);
	else if (ft_strnstr(line, "sa\n", 3))
		swap_a(stacks, 0);
	else if (ft_strnstr(line, "sb\n", 3))
		swap_b(stacks, 0);
	else if (ft_strnstr(line, "ss\n", 3))
		swap_tog_checker(stacks);
	else if (ft_strnstr(line, "ra\n", 3))
		rotate_a(stacks, 0);
	else if (ft_strnstr(line, "rb\n", 3))
		rotate_b(stacks, 0);
	else if (ft_strnstr(line, "rr\n", 3))
		rotate_tog_checker(stacks);
	else if (ft_strnstr(line, "rra", 3))
		reverse_a(stacks, 0);
	else if (ft_strnstr(line, "rrb", 3))
		reverse_b(stacks, 0);
	else if (ft_strnstr(line, "rrr", 3))
		reverse_tog_checker(stacks);
}

static void	check_it(t_stacks *stacks)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		execute_stacks(line, stacks);
		free(line);
		line = get_next_line(0);
	}
	if (is_sorted(stacks))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
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
	check_it(stacks);
	free_stacks(stacks);
}
