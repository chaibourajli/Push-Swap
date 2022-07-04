/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:55:31 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/04 16:24:14 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 
  
int *push(t_stack *stack, int val) 
{ 
    if(stack->top == (int)(stack->size - 1)) 
        return(0);
    stack->tab[++stack->top] = val;
    return (&stack->tab[stack->top]); 
}

int *pop(t_stack *stack) 
{ 
    if (stack->top == -1) 
        return (0); 
    return (&stack->tab[stack->top--]); 
}

t_stack *create_stack(unsigned int size) 
{ 
    t_stack *stack;
    stack = (t_stack *)malloc(sizeof(*stack)); 
    if (!(stack))
        return (0); 
    stack->size = size; 
    stack->top = -1; 
    stack->tab = malloc(size * sizeof(*(stack->tab))); 
    if (!(stack->tab))
    return (NULL); 
    return (stack); 
}

void    print_stack(t_stack *stack)
{
    int i;
    
    i = 0;
    if (stack->top == -1)
    {
        ft_putstr("(empty)");
        return ;
    }
    while (i < stack->size)
    {
        ft_putnbr(stack->tab[i]);
        ft_putchar('\n');
        i++;
    }
}