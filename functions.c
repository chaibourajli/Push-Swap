/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:03:02 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/01 17:23:59 by cbourajl         ###   ########.fr       */
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

t_stack    *push(t_stack *stack, int value)
{
    stack->top++;
    stack->tab[stack->top] = value;
    return (stack);
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
char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}