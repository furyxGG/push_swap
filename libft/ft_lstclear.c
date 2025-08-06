/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 08:27:13 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/08/06 13:11:37 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*a;

	while (*lst)
	{
		a = (*lst)->next;
		free(*lst);
		*lst = a;
	}
	*lst = NULL;
}
