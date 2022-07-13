/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_fonctions_end.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:29:11 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/13 16:13:08 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*pop_back_list(t_list *lst)
{
	t_list	*tmp;
	t_list	*before;

	if (lst == NULL)
		return (0);
	if (lst->next == NULL)
	{
		free (lst);
		return (NULL);
	}
	tmp = lst;
	before = lst;
	while (tmp->next)
	{
		before = tmp;
		tmp = tmp->next;
	}
	before->next = NULL;
	free(tmp);
	return (lst);
}

void	ft_lstclear(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	while (lst)
	{
		temp = lst;
		lst = lst->next;
	}
	return (temp);
}
