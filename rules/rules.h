/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:27:35 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/06 15:27:35 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULES_H
# define RULES_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

typedef struct s_stacks
{
	t_list	*a;
	t_list	*b;
}				t_stacks;

void	swap_a(t_stacks *stacks, int w);
void	swap_b(t_stacks *stacks, int w);
void	swap_tog(t_stacks *stacks);

void	push_b(t_stacks *stacks);
void	push_a(t_stacks *stacks);

void	rotate_a(t_stacks *stacks, int w);
void	rotate_b(t_stacks *stacks, int w);
void	rotate_tog(t_stacks *stacks);

void	reverse_a(t_stacks *stacks, int w);
void	reverse_b(t_stacks *stacks, int w);
void	reverse_tog(t_stacks *stacks);

#endif