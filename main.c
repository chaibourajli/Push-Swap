/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:45:25 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/04 18:25:38 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    t_stack *a;
    t_stack *b;
    char    **args;

    args = get_args(ac, av);
    if (!args)
        return (0);
    a = create_stack(ac - 1);
    b = create_stack(ac - 1);
    i = 2;
    while (i <= ac)
    {
        push(a, ft_atoi(args[ac - i]));
        i++;
    }
}