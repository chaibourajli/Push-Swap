/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:18:58 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/04 18:22:59 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack *a)
{
    int tmp;
    unsigned int size;
    int i;

    size = a->size;
    if (a->size > 1)
    {
        tmp = a->tab[0];
        i = 0;
        while (i < a->size - 1)
        {
            a->tab[i] = a->tab[i + 1];
            i++;
        }
        a->tab[a->size - 1] = tmp;
        a->size = size;
    }
}

void    rb(t_stack *b)
{
    int tmp;
    unsigned int size;
    int i;

    size = b->size;
    if (b->size > 1)
    {
        tmp = b->tab[0];
        i = 0;
        while (i < b->size - 1)
        {
            b->tab[i] = b->tab[i + 1];
            i++;
        }
        b->tab[b->size - 1] = tmp;
        b->size = size;
    }
}

void    rr(t_stack *a, t_stack *b)
{
    ra(a);
    rb(b);
}