/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:23:11 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 18:20:38 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_stack **a)
{
    t_stack *tmp;
    t_stack *prev;

    tmp = *(a);
    prev = *(a);
    while (tmp->next)
    {
        prev = tmp;
        tmp = tmp->next;
    }
    prev->next = NULL;
    addfront(a, tmp);
    ft_putstr("rra\n");
}

void    rrb(t_stack **b)
{
    t_stack *tmp;
    t_stack *prev;

    tmp = *(b);
    prev = *(b);
    while (tmp->next)
    {
        prev = tmp;
        tmp = tmp->next;
    }
    prev->next = NULL;
    addfront(b, tmp);
    ft_putstr("rrb\n");
}

void    rrr(t_stack **a, t_stack **b)
{
    if (!(*a) && !(*a)->next)
    {
        rrb(b);
        ft_putstr("rrb\n");
        exit(1);
    }
    if (!(*b) && !(*b)->next)
    {
        rra(a);
        ft_putstr("rra\n");
        exit(1);
    }
    rra(a);
    rrb(b);
    ft_putstr("rrr\n");
}