/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:07:33 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/04 17:18:55 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_stack *a)
{
    int tmp;

    if (a->size > 1)
    {
        tmp = a->tab[0];
        a->tab[0] = a->tab[1];
        a->tab[1] = tmp;
    }
}

void    sb(t_stack *b)
{
    int tmp;

    if (b->size > 1)
    {
        tmp = b->tab[0];
        b->tab[0] = b->tab[1];
        b->tab[1] = tmp;
    }
}

void    ss(t_stack *a, t_stack *b)
{
    sa(a);
    sb(b);
}