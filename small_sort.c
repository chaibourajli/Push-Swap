/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:10:24 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 21:32:40 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    five_verify(t_stack **a)
{
    if ((*a)->index == 2)
    {
        if ((*a)->next->index == 1)
        {
            sa(*a);
            rra(*a);
        }
        else if ((*a)->next->index == 0)
            ra(a);
    }
}

void    three(t_stack *a)
{
    get_index(*a);
    if (to_order(*a))
    {
        if ((*a)->index == 0)
        {
            rra(a);
            sa(*a);
        }
        else if ((*a)->index == 1)
		{
			if ((*a)->next->index == 2)
				rra(a);
			else if ((*a)->next->index == 0)
				sa(*a);
		}
		else
			five_verify(a);
    }
}