/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:07:33 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 18:28:06 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

t_stack *sa(t_stack *a)
{
    t_stack *tmp;
    
    if (!a)
        return (NULL);
    tmp = a->next;
    ft_swap(&a->value, &tmp->value);
    ft_putstr("sa\n");
    return (tmp);
}

t_stack *sb(t_stack *b)
{
    t_stack *tmp;
    
    if (!b)
        return (NULL);
    tmp = b->next;
    ft_swap(&b->value, &tmp->value);
    ft_putstr("sb\n");
    return (tmp);
}

void    ss(t_stack *a, t_stack *b)
{
    if (!a)
    {
        sb(b);
        ft_putstr("sb\n");
        exit(1);
    }
    if (!b)
    {
        sa(a);
        ft_putstr("sa\n");
        exit(1);
    }
    sa(a);
    sb(b);
    ft_putstr("ss\n");
}