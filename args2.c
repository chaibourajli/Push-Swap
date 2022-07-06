/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:55:39 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 12:27:31 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_args(char *str, t_stack **a)
{
    int i;
    int j;
    char    **splitted;

    i = 0;
    if (!check_int(str))
        return (0);
    splitted = ft_strsplit(str, ' ');
    if (!splitted)
        return (0);
    while (splitted[i])
    {
        j = 0;
        if (!(in_range(ft_atoi(splitted[i]))))
            return (0);
        if (!check_int(splitted[i]))
            return (0);
        create_stack(splitted[i], a);
        i++;
    }
    return (1);
}

int check_double(t_stack *a)
{
    t_stack *tmp;
    t_stack *new;

    tmp = a;
    new = a->next;
    while (tmp->next)
    {
        while (new)
        {
            if (tmp->value == new->value)
            {
                ft_putstr("Error\n");
                return (0);
            }
            new = new->next;
        }
        tmp = tmp->next;
        new = tmp->next;
    }
    return (1);
}