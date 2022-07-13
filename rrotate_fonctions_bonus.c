/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_fonctions_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:28:12 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/13 17:14:59 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rra(t_list **(lst))
{
	t_list	*tmp;
	t_list	*elmt;

	tmp = *(lst);
	elmt = *(lst);
	while (tmp->next)
	{
		elmt = tmp;
		tmp = tmp->next;
	}
	elmt->next = NULL;
	ft_lstadd_front(lst, tmp);
}

void	rrb(t_list **(lst))
{
	t_list	*tmp;
	t_list	*elmt;

	tmp = *(lst);
	elmt = *(lst);
	while (tmp->next)
	{
		elmt = tmp;
		tmp = tmp->next;
	}
	elmt->next = NULL;
	ft_lstadd_front(lst, tmp);
}

void	rrr(t_list **lsta, t_list **lstb)
{
	if (!lsta && !(*lsta)->next)
	{
		rrb(lstb);
		exit(1);
	}
	if (!lstb && !(*lstb)->next)
	{
		rra(lsta);
		exit(1);
	}
	rra(lsta);
	rrb(lstb);
}

void	push(t_list **a, t_list **b, int n)
{
	t_list	*tmp;

	n = 0;
	if (!*b)
	{
		(*b) = ft_lstnew((*a)->value);
		*a = (*a)->next;
	}
	else
	{
		tmp = (*a);
		(*a) = (*a)->next;
		tmp->next = NULL;
		ft_lstadd_front(b, tmp);
	}
}
