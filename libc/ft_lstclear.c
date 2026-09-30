/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexgonz <alexgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:17:59 by alexgonz          #+#    #+#             */
/*   Updated: 2026/09/30 12:15:15 by alexgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = *lst;
	if (!lst || !*lst || !del)
		return ;
	while (lst && lst->)
	{
		temp = (*lst)->next;
		del(*lst->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
