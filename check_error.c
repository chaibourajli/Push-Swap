/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:08:48 by cbourajl          #+#    #+#             */
/*   Updated: 2022/06/28 21:41:23 by cbourajl         ###   ########.fr       */
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

int check_double(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    while (i < ac)
    {
        j = i + 1;
        while (j < ac)
        {
            if (ft_atoi(av[i]) == ft_atoi(av[j]))
                return (0);
            j++;
        }
        i++;
    }
    return (1);    
}

int check_args(int ac, char **av)
{
    int i;

    i = 1;
    while (i < ac)
    {
        if (!check_int(av[i]))
            return (0);
        i++;
    }
    if (!check_double(ac, av))
        return (0);
    return (1);
}