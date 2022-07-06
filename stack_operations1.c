/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:55:31 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 12:11:47 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 
  
t_stack *newstack(long nb)
{
    t_stack *new;
    if (!new)
        return (NULL);
    new->value = nb;
    new->next = NULL;
    return (new);
}

int stacksize(t_stack *stack)
{
    int i;

    i = 0;
    if (!stack)
        return (0);
    while (stack)
    {
        stack = stack->next;
        i++;
    }
    return (i);
}

void    print_stack(t_stack *stack)
{
    if (!stack)
        return ;
    while (stack)
    {
        ft_putnbr(stack->value);
        ft_putchar('\n');
        stack = stack->next;
    }
}

void    addback(t_stack **stack, t_stack *new)
{
    t_stack *tmp;

    if (!*stack)
        *stack = new;
    else
    {
        tmp = *stack;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new;
    }
}

void    addfront(t_stack **stack, t_stack *new)
{
    if (!*stack && !stack)
        return ;
    else
    {
        new->next = *stack;
        *stack = new;
    }
}