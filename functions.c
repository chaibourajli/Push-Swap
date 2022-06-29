/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:03:02 by cbourajl          #+#    #+#             */
/*   Updated: 2022/06/29 23:21:41 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *create_stack(int size)
{
    t_stack *stack;

    stack = (t_stack *)malloc(sizeof(t_stack));
    stack->size = size;
    stack->top = -1;
    stack->tab = (int *)malloc(sizeof(int) * size);
    return (stack);
}

void    push(t_stack *stack, int value)
{
    stack->top++;
    stack->tab[stack->top] = value;
}

int pop(t_stack *stack)
{
    int value;

    if (stack->top == -1)
        return (0);
    stack->top--;
    value = stack->tab[stack->top];
    return (value);
}