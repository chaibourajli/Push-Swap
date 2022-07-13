/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_fonctions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:23:11 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/13 17:16:11 by cbourajl         ###   ########.fr       */
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
	write(1, "rra\n", 4);
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
	write(1, "rrb\n", 4);
}

void	rrr(t_list **lsta, t_list **lstb)
{
	if (!lsta && !(*lsta)->next)
	{
		rrb(lstb);
		write(1, "rrb\n", 4);
		exit(1);
	}
	if (!lstb && !(*lstb)->next)
	{
		rra(lsta);
		write(1, "rra\n", 4);
		exit(1);
	}
	rra(lsta);
	rrb(lstb);
	write(1, "rrr\n", 4);
}

void	push(t_list **a, t_list **b, int n)
{
	t_list	*tmp;
	t_list	*temp;

	if (!*b)
	{
		(*b) = ft_lstnew((*a)->value);
		temp = *a;
		*a = (*a)->next;
		free(temp);
	}
	else
	{
		tmp = (*a);
		(*a) = (*a)->next;
		tmp->next = NULL;
		ft_lstadd_front(b, tmp);
	}
	if (n)
		write(1, "pb\n", 3);
	else
		write(1, "pa\n", 3);
}
