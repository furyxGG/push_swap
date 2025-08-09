/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:19:11 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/08 15:19:11 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TURK_H
# define TURK_H

#include "../rules/rules.h"

void    sort_three(t_stacks *stacks);
void    move_min_top(t_stacks *stacks);

void	turk(t_stacks *stacks);
int		get_target_in_b(t_stacks *stacks, int index);
int		get_target_in_a(t_stacks *stacks, int index);
int		get_pos(t_list *list, int index);
int		calc_to_cheap_send_b(t_stacks *stacks, int index);
int		calc_to_cheap_send_a(t_stacks *stacks, int index);
void	rotate_tog_trk(t_stacks *stacks, int pos_a, int pos_b);
void	move_cheap_to_b(t_stacks *stacks);
void	move_cheap_to_a(t_stacks *stacks);
int     is_sorted(t_stacks *stacks);

#endif