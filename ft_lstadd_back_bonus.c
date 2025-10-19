/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-han <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 23:32:42 by fael-han          #+#    #+#             */
/*   Updated: 2025/10/19 05:37:59 by fael-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (new && lst)
	{
		if (!*lst)
		{
			if (new)
				*lst = new;
			return ;
		}
		current = *lst;
		while (current->next)
			current = current->next;
		current->next = new;
	}
}
