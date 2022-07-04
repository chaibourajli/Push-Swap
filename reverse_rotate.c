/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:23:11 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/04 18:16:00 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    *rra(t_stack *a)
{
    int tmp;
    unsigned int size;

    size = a->size;
    if (a->size > 1)
    {
        tmp = a->tab[a->size - 1];
        a->size--;
        while (a->size > 0)
        {
            a->tab[a->size] = a->tab[a->size - 1];
            a->size--;
        }
        a->tab[0] = tmp;
        a->size = size;
    }
}

void    rrb(t_stack *b)
{
    int tmp;
    unsigned int size;

    size = b->size;

    if (b->size > 1)
    {
        tmp = b->tab[b->size - 1];
        b->size--;
        while (b->size > 0)
        {
            b->tab[b->size] = b->tab[b->size - 1];
            b->size--;
        }
        b->tab[0] = tmp;
        b->size = size;
    }
}

void    rrr(t_stack *a, t_stack *b)
{
    rra(a);
    rrb(b);
}