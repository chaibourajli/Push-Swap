/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_fonctions_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:18:58 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 23:43:15 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ra(t_list **(lst))
{
	t_list	*tmp;
	t_list	*last;

	tmp = *(lst);
	last = ft_lstlast(*(lst));
	*(lst) = (*lst)->next;
	last->next = tmp;
	tmp->next = NULL;
}

void	rb(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *(lst);
	last = ft_lstlast(*(lst));
	*(lst) = (*lst)->next;
	last->next = tmp;
	tmp->next = NULL;
}

void	rr(t_list **lsta, t_list **lstb)
{
	if (!(*lsta) && !(*lsta)->next)
	{
		rb(lstb);
		exit(1);
	}
	if (!(*lstb) && !(*lstb)->next)
	{
		ra(lsta);
		exit(1);
	}
	ra(lsta);
	rb(lstb);
}
