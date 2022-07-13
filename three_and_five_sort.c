/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_and_five_sort.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:10:24 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/13 15:05:30 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	five_verify(t_list **stack_a)
{
	if ((*stack_a)->index == 2)
	{
		if ((*stack_a)->next->index == 1)
		{
			sa(*stack_a);
			rra(stack_a);
		}
		else if ((*stack_a)->next->index == 0)
			ra(stack_a);
	}
}

void	three(t_list **stack_a)
{
	indexing(*stack_a);
	if (!ordonner(*stack_a))
	{
		if ((*stack_a)->index == 0)
		{
			rra(stack_a);
			sa(*stack_a);
		}
		else if ((*stack_a)->index == 1)
		{
			if ((*stack_a)->next->index == 2)
				rra(stack_a);
			else if ((*stack_a)->next->index == 0)
				sa(*stack_a);
		}
		else
			five_verify(stack_a);
	}
}

void	five(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst;
	t_list	*lst1;

	lst = *stack_a;
	lst1 = (*stack_a)->next;
	while (ft_lstsize(lst) > 3)
	{
		if (lst->index == 0 || lst->index == 1)
			push(stack_a, stack_b, 1);
		else
			ra(stack_a);
		lst = lst1;
		lst1 = lst1->next;
	}
	three(stack_a);
	if ((*stack_b)->value < (*stack_b)->next->value)
		sb(*stack_b);
	push(stack_b, stack_a, 0);
	push(stack_b, stack_a, 0);
}
