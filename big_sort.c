/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:17:13 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 23:37:37 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_to_b_verify(t_list **stack_a, t_list **stack_b, int min, int max)
{
	if ((*stack_a)->index >= min && (*stack_a)->index <= max)
	{
		push(stack_a, stack_b, 1);
		if ((*stack_b)->next && ((*stack_b)->value < (*stack_b)->next->value))
			sb(*stack_b);
		min++;
		max++;
		return (1);
	}
	else if ((*stack_a)->index < min)
	{
		push(stack_a, stack_b, 1);
		rb(stack_b);
		min++;
		max++;
		return (1);
	}
	return (0);
}

void	push_to_b(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	max;

	min = 0;
	max = 15;
	if (ft_lstsize(*stack_a) == 500)
		max = 35;
	while ((*stack_a))
	{
		if (push_to_b_verify(stack_a, stack_b, min, max))
		{
			min++;
			max++;
		}
		else
			ra(stack_a);
	}
}

int	recherche(t_list *stack_b, int index)
{
	int	pos;

	pos = 0;
	indexing(stack_b);
	while (stack_b)
	{
		if (stack_b->index == index)
			return (pos);
		stack_b = stack_b->next;
		pos++;
	}
	return (pos);
}

void	push_to_a(t_list **stack_a, t_list **stack_b)
{
	int	ind;

	indexing(*stack_b);
	ind = ft_lstsize(*stack_b) - 1;
	while (ind > -1)
	{
		if ((*stack_b)->index == ind)
		{
			push(stack_b, stack_a, 0);
			ind--;
		}
		else
		{
			if (recherche(*stack_b, ind) < (ind / 2))
				rb(stack_b);
			else
				rrb(stack_b);
		}
	}
}
