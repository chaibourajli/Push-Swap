/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:45:25 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/01 17:51:01 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    int k = 0;
    int j;
    char *str;
    char **splitted;
    t_stack **tab;

    splitted = (char **)malloc(sizeof(char *) * ac);
    str = (char *)malloc(sizeof(char) * ac * 100) ;
    i = 1;
    while (--ac >= i)
    {
        str = ft_strjoin(str, av[ac]);
        str = ft_strjoin(str, " ");
    }
    splitted = ft_split(str, ' ');
    i = 0;
    while (splitted[i])
    {
        printf("%s\n", splitted[i]);
        i++;
    }
    free (splitted);
    free (str);
}
