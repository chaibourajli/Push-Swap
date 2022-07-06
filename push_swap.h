/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:03:09 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 17:02:53 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack{
    int value;
    int index;
    struct s_stack *next;
} t_stack;

# define MAX_INT 2147483647
# define MIN_INT -2147483648

void	ft_putnbr(int n);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void    clearstack(t_stack *a);
void    print_stack(t_stack *stack);
void    create_stack(char *str, t_stack **head);
void    addfront(t_stack **stack, t_stack *new);
void    addback(t_stack **stack, t_stack *new);
void    free_str(char **str);
int     ft_atoi(char *s);
int	    ft_strlcpy(char *dest, const char *src, int size);
int	ft_strlcpy(char *dest, const char *src, int size);
int     check_int(char *str);
int     in_range(long nb);
int     ft_strlen(char *str);
int     stacksize(t_stack *stack);
int     check_double(t_stack *a);
int     check_args(char *str, t_stack **a);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char *s, char c);
char    *ft_strcpy(char *dest, char *src);
char    **get_args(int ac, char **av);
t_stack *newstack(long nb);
t_stack *pop_front(t_stack *a);
t_stack *pop_back(t_stack *stack);
t_stack *lastelement(t_stack *stack);

#endif