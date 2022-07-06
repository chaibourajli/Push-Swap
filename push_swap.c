/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:45:25 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 18:47:01 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    get_index(t_stack *a)
{
    int i;
    int j;
    t_stack *tmp;
    t_stack *new;

    i = stacksize(a) - 1;
    tmp = a;
    new = a->next;
    while (tmp)
    {
        j = 0;
        while (new)
        {
            if (tmp->value < new->value)
                j++;
            new = new->next;
        }
        tmp->index = i - j;
        tmp = tmp->next;
        new = a;
    }
}

int to_order(t_stack *a)
{
    while (a->next)
    {
        if (a->value > a->next->value)
            return (0);
        a = a->next;
    }
    return (1);
}

int check(char **av, t_stack **a)
{
    int i;

    i = 1;
    while (av[i])
    {
        if (!av[i][0])
        {
            ft_putstr("Error\n");
            return (0);
        }
        if (!check_args(av[i], a))
        {
            ft_putstr("Error\n");
            return (0);
        }
        i++;
    }
}