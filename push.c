/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:20:34 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/04 17:28:22 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(t_stack *a, t_stack *b)
{
    if (b->size > 0)
    {
        push(a, b->tab[b->size - 1]);
        b->size--;
    }
}

void    pb(t_stack *a, t_stack *b)
{
    if (a->size > 0)
    {
        push(b, a->tab[a->size - 1]);
        a->size--;
    }
}