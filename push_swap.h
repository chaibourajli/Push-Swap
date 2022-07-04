/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:03:09 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/04 18:24:12 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack{
    unsigned int size;
    int top;
    int *tab;
} t_stack;

void	ft_putnbr(int n);
void    print_stack(t_stack *stack);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void    sa(t_stack *a);
void    sb(t_stack *b);
void    ss(t_stack *a, t_stack *b);
void    pa(t_stack *a, t_stack *b);
void    pb(t_stack *a, t_stack *b);
void    rra(t_stack *a);
void    rrb(t_stack *b);
void    rrr(t_stack *a, t_stack *b);
void    rb(t_stack *b);
void    ra(t_stack *a);
void    rr(t_stack *a, t_stack *b);
int     ft_atoi(char *str);
int     check_int(char *str);
int     check_double(int ac, char **av);
int     check_args(int ac, char **av);
int     ft_strlen(char *str);
int     *push(t_stack *stack, int value);
int     *pop(t_stack *stack);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char *s, char c);
char    *ft_strcpy(char *dest, char *src);
char    **get_args(int ac, char **av);
t_stack *create_stack(unsigned int size);

#endif