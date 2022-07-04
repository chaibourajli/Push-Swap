/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:08:48 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/04 14:11:28 by cbourajl         ###   ########.fr       */
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
    if (ac < 2)
        return (0);
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

char    **get_args(int ac, char **av)
{
    char    **splitted;
    char    *str;

    if (check_args(ac, av) == 0)
        return (NULL);
    splitted = (char **)malloc(sizeof(char *) * ac);
    str = (char *)malloc(sizeof(char) * ac * 100);
    while (--ac >= 1)
    {
        str = ft_strjoin(str, av[ac]);
        str = ft_strjoin(str, " ");
    }
    splitted = ft_split(str, ' ');
    return (splitted);
}