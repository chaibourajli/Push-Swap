/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:03:09 by cbourajl          #+#    #+#             */
/*   Updated: 2022/06/29 23:12:18 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack{
    int *tab;
    int size;
    int top;
} t_stack;

int ft_atoi(char *str);
void	ft_putnbr(int n);
int check_int(char *str);
int check_double(int ac, char **av);
int check_args(int ac, char **av);
void    push(t_stack *stack, int value);
t_stack *create_stack(int size);
int pop(t_stack *stack);

#endif