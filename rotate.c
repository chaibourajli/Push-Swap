/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:18:58 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 18:23:54 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack **a)
{
    t_stack *tmp;
    t_stack *last;

    tmp = *(a);
    last = lastelement(*(a));
    *(a) = last;
    last->next = tmp;
    tmp->next = NULL;
    ft_putstr("ra\n");
}

void    rb(t_stack **b)
{
    t_stack *tmp;
    t_stack *last;

    tmp = *(b);
    last = lastelement(*(b));
    *(b) = last;
    last->next = tmp;
    tmp->next = NULL;
    ft_putstr("rb\n");
}

void    rr(t_stack **a, t_stack **b)
{
    if (!(*a) && !(*a)->next)
    {
        rb(b);
        ft_putstr("rb\n");
        exit(1);
    }
    if (!(*b) && !(*b)->next)
    {
        ra(a);
        ft_putstr("ra\n");
        exit(1);
    }
    ra(a);
    rb(b);
    ft_putstr("rr\n");
}