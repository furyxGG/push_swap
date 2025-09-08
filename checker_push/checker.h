/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 19:03:33 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/15 19:03:33 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include "../src/push_swap.h"
# include "../rules/rules.h"
# include "../turk_algorithm/turk.h"
# include "../get_next_line/get_next_line.h"

void	push_b_checker(t_stacks *stacks);
void	push_a_checker(t_stacks *stacks);
void	swap_tog_checker(t_stacks *stacks);
void	rotate_tog_checker(t_stacks *stacks);
void	reverse_tog_checker(t_stacks *stacks);

#endif