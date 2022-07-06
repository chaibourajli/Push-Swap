/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:29:11 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 12:49:11 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *pop_last(t_stack *a)
{
    t_stack *tmp;
    t_stack *prev;

    if (!a)
        return (NULL);
    if (!a->next)
    {
        free(a);
        return (NULL);
    }
    tmp = a;
    prev = a;
    while (tmp->next)
    {
        prev = tmp;
        tmp = tmp->next;
    }
    prev->next = NULL;
    free(tmp);
    return (a);
}

t_stack *pop_front(t_stack *a)
{
    t_stack *stack;
    
    if (!a)
        return (NULL);
    stack = malloc(sizeof(*stack));
    if (!stack)
        return (NULL);
    stack = a->next;
    free(a);
    return (stack);
}

void    clearstack(t_stack *a)
{
    if (!a)
        return ;
    while (a)
        a = pop_front(a);
}
t_stack *lastelement(t_stack *stack)
{
    t_stack *tmp;

    if (!stack)
        return (NULL);
    while (stack)
    {
        tmp = stack;
        stack = stack->next;
    }
    return (tmp);
}