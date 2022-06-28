/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:45:25 by cbourajl          #+#    #+#             */
/*   Updated: 2022/06/28 22:20:11 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    int i;
    int j;
    int **a;

    i = 0;
    if (ac == 1)
        return (0);
    a = (int**)malloc(ac * sizeof(int*));
    check_args(ac, av);
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            ft_putnbr(a[i][j]);
            j++;
        }
        i++;
    }
}