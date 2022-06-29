/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:45:25 by cbourajl          #+#    #+#             */
/*   Updated: 2022/06/29 23:35:47 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    int j;
    t_stack *a;

    i = 1;
    if (ac == 1)
        return (0);
    a = create_stack(ac - 1);
    check_args(ac, av);
    while (i < ac)
    {
        push(a, ft_atoi(av[i]));
        i++;
        printf("%d\n", a->tab[a->top]);
    }
}