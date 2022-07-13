/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:03:09 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/13 16:39:35 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
	int				index;
}		t_list;

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
long	ft_atoi(const char *str);
int		word_number(const char *s, char c);
char	**free_tab(char **tab, int n);
char	*def_word(char *s, int *len, char c);
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(long x);
void	ft_lstadd_front(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*pop_back_list(t_list *lst);
t_list	*pop_front_list(t_list *lst);
void	ft_print_list(t_list *lst);
void	ft_lstclear(t_list *lst);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_isdigit(char *s);
void	free_array(char **str);
void	ft_creat_stack(char *str, t_list **head);
int		overflow(long nb);
int		number(char *s);
int		verif(char *s, t_list **stack_a);
int		verif_rep(t_list *stack_a);
void	ft_swap(int *a, int *b);
t_list	*sa(t_list *lst);
t_list	*sb(t_list *lst);
void	ss(t_list *lsta, t_list *lstb);
void	ra(t_list **(lst));
void	rb(t_list **lst);
void	rr(t_list **lsta, t_list **lstb);
void	rra(t_list **(lst));
void	rrb(t_list **(lst));
void	rrr(t_list **lsta, t_list **lstb);
void	push(t_list **a, t_list **b, int n);
void	three(t_list	**stack_a);
void	five(t_list	**stack_a, t_list	**stack_b);
void	push_to_b(t_list	**stack_a, t_list **stack_b);
void	push_to_a(t_list	**stack_a, t_list **stack_b);
int		indexing(t_list *stack_a);
int		ordonner(t_list	*stack_a);
char	*get_next_line(int fd);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	destroy_split(int n, char **str);
int		stacklen(t_list *a);
int		check_sort(t_list *a);

#endif