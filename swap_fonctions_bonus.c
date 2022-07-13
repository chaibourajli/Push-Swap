/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_fonctions_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:29:57 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 23:44:19 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

t_list	*sa(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		exit(1);
	tmp = lst->next;
	ft_swap(&lst->value, &tmp->value);
	return (tmp);
}

t_list	*sb(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		exit(1);
	tmp = lst->next;
	ft_swap(&lst->value, &tmp->value);
	return (lst);
}

void	ss(t_list *lsta, t_list *lstb)
{
	if (!lsta)
	{
		sb(lstb);
		exit(1);
	}
	if (!lstb)
	{
		sa(lsta);
		exit(1);
	}
	sa(lsta);
	sb(lstb);
}
