/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 02:43:27 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/05 02:43:27 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include "../rules/rules.h"
# include "../turk_algorithm/turk.h"

int			check_for_words(char **lists);
int			check_for_double(char **lists);
int			check_for_plus(char **lists);
int			check_all(char **lists);

t_stacks	*create_stacks(char **lists);

void    	bubble_sort(int *arr, int size);
int	    	*make_sort_arr(t_stacks *stacks, int size);
void	    stack_index(t_stacks *stacks);

void    	sort_two(t_stacks *stacks);
void    	sort_three(t_stacks *stacks);
void        sort_four_five(t_stacks *stacks);
void	    sort(t_stacks *stacks);

void        move_min_top(t_stacks *stacks);

#endif