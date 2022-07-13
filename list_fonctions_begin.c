/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_fonctions_begin.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:55:31 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 23:34:10 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

t_list	*ft_lstnew(long x)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (0);
	new->value = x;
	new->next = NULL;
	return (new);
}

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_print_list(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		ft_putnbr(lst->value);
		ft_putchar(' ');
		lst = lst->next;
	}
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (*alst == NULL)
		*alst = new;
	else
	{
		temp = *alst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst == NULL && alst == NULL)
		return ;
	else
	{
		new->next = *alst;
		*alst = new;
	}
}
