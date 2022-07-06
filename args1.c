/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:08:48 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 12:23:37 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_int(char *str)
{
    int i;

    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

void    free_str(char **str)
{
    int i;

    i = 0;
    while (str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}

int in_range(long nb)
{
    if (nb <= MIN_INT || nb >= MAX_INT)
        return (0);
    return (1);
}

void    create_stack(char *str, t_stack **head)
{
    t_stack *new;

    new = newstack(ft_atoi(str));
    addback(head, new);
}