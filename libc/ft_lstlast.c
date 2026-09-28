/* ************************************************************************** */
/*                                                                            */
/*             last()                                           :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:39:58 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/28 12:47:55 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int    ft_lstsize(t_list *lst)
{
        unsigned int    i;
        t_list  temp;

        temp = lst;
        i = 0;
        while (temp->next != NULL)
        {
                temp = temp->next;
                i++;
        }
        return (i);
}


t_list	*ft_lstlast(t_list *lst)
{
	unsigned int	len;
	t_list	*last;

	len = ft_lstsize(lst);
	last = lst;
	while (len > 0)
	{
		last = last->next;
		len--;
	}
	return (last);
}
