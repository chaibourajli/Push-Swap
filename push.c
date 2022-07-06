/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:20:34 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 18:00:21 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_stack **a, t_stack **b, int n)
{
    t_stack *tmp;

    if (!*b)
    {
        (*b) = newstack((*a)->value);
        (*a) = (*a)->next;
    }
    else
    {
        tmp = (*a);
        (*a) = (*a)->next;
        tmp->next = NULL;
        addfront(b, tmp);
    }
    if (n)
        ft_putstr("pb\n");
    else
        ft_putstr("pa\n");
}