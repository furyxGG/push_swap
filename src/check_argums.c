/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argums.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:35:44 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/06 17:35:44 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_for_words(char **lists)
{
	int	a;
	int	b;

	a = 0;
	while (lists[a])
	{
		b = 0;
		while (lists[a][b])
		{
			if (ft_isdigit(lists[a][b]) == 0 || (lists[a][b] == '-' && lists[a][b + 1] == '\0') ||
					(lists[a][b] == '+' && lists[a][b + 1] == '\0'))
			{
				return (0);
			}
			b++;
		}
		a++;
	}
	return (1);
}

int	check_for_double(char **lists)
{
	int	a;
	int	b;

	a = 0;
	while (lists[a])
	{
		b = a + 1;
		while (lists[b])
		{
			if (ft_atoi(lists[a]) == ft_atoi(lists[b]))
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}

int	check_for_plus(char **lists)
{
	int	a;
	int	b;

	a = 0;
	while (lists[a])
	{
		b = 0;
		while (lists[a][b])
		{
			if ((lists[a][b] == '-' && (lists[a][b + 1] == '-' || lists[a][b + 1] == '+')) ||
				(lists[a][b] == '+' && (lists[a][b + 1] == '-' || lists[a][b + 1] == '+')))
			{
				return (0);
			}
			b++;
		}
		a++;
	}
	return (1);
}

int	check_for_int_values(char **lists)
{
	int	a;

	a = 0;
	while (lists[a])
	{
		if (ft_atoi(lists[a]) > INT_MAX || ft_atoi(lists[a]) < INT_MIN)
			return (0);
		a++;
	}
	return (1);
}

int	check_all(char **lists)
{
	if (check_for_words(lists) && check_for_double(lists) && check_for_plus(lists) && check_for_int_values(lists))
		return (1);
	ft_printf("Error\n");
	exit(0);
}