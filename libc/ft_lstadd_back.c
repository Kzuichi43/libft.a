/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:58:38 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/30 12:14:57 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst)
	{
		if (!(*lst))
			*lst = new;
		else if (*lst && new)
		{
			if (temp->next == NULL)
			{
				last = ft_lstlast(*lst);
				last->next = new;
			}
		}
	}
}
