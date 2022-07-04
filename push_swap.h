/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:03:09 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/04 16:22:17 by cbourajl         ###   ########.fr       */
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

int ft_atoi(char *str);
void	ft_putnbr(int n);
int check_int(char *str);
int check_double(int ac, char **av);
int check_args(int ac, char **av);
char	*ft_strjoin(char *s1, char *s2);
static char	*ft_fill(char *s, char c);
static char	**ft_free(char ***ptr, int i);
char	**ft_split(char *s, char c);
static int	word_count(char *s, char c);
char *ft_strcpy(char *dest, char *src);
int ft_strlen(char *str);
char    **get_args(int ac, char **av);
int *push(t_stack *stack, int value);
int *pop(t_stack *stack);
t_stack *create_stack(unsigned int size);
void    print_stack(t_stack *stack);
void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif