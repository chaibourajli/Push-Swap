/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:27:26 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 23:27:42 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **(lst))
{
	t_list	*tmp;
	t_list	*last;

	tmp = *(lst);
	last = ft_lstlast(*(lst));
	*(lst) = (*lst)->next;
	last->next = tmp;
	tmp->next = NULL;
	write(1, "ra\n", 3);
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
	write(1, "rb\n", 3);
}

void	rr(t_list **lsta, t_list **lstb)
{
	if (!(*lsta) && !(*lsta)->next)
	{
		rb(lstb);
		write(1, "rb\n", 3);
		exit(1);
	}
	if (!(*lstb) && !(*lstb)->next)
	{
		ra(lsta);
		write(1, "ra\n", 3);
		exit(1);
	}
	ra(lsta);
	rb(lstb);
	write(1, "rr\n", 3);
}
