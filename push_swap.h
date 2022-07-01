/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:03:09 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/01 17:45:36 by cbourajl         ###   ########.fr       */
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
t_stack    *push(t_stack *stack, int value);
t_stack *create_stack(int size);
char	*ft_strjoin(char *s1, char *s2);
static char	*ft_fill(char *s, char c);
static char	**ft_free(char ***ptr, int i);
char	**ft_split(char *s, char c);
static int	word_count(char *s, char c);
int pop(t_stack *stack);
char *ft_strcpy(char *dest, char *src);
int ft_strlen(char *str);

#endif