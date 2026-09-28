/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:59:33 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/28 12:07:23 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

struct t_list	*ft_lstnew(void	*content)
{
	struct	t_list *node;

	node = malloc(sizeof(struct t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = NULL;
	return (node);	
}
