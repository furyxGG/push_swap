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

void	turk(t_stacks *stacks);
int		get_target_in_b(t_stacks *stacks, int index);
int		get_target_in_a(t_stacks *stacks, int index);
#endif