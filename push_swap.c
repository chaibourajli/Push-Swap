/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:45:25 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/13 17:15:51 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	indexing(t_list *stack_a)
{
	int		i;
	int		j;
	t_list	*elm;
	t_list	*lst;

	i = ft_lstsize(stack_a) - 1;
	lst = stack_a;
	elm = stack_a->next;
	while (lst)
	{
		j = 0;
		while (elm)
		{
			if (lst->value < elm->value)
				j++;
			elm = elm->next;
		}
		lst->index = i - j;
		lst = lst->next;
		elm = stack_a;
	}
	return (1);
}

int	ordonner(t_list *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->value > stack_a->next->value)
			return (0);
		stack_a = stack_a->next;
	}
	ft_putstr("These numbers are already sorted.\n");
	return (1);
}

int	sort(char **av, t_list **stack_a)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (!av[i][0])
			return (write(1, "Error\n", 6), 0);
		if (!verif(av[i], stack_a))
			return (write(1, "Error\n", 6), 0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac != 1)
	{
		if (!sort(av, &stack_a))
			return (0);
		verif_rep(stack_a);
		if (!ordonner(stack_a) && indexing(stack_a))
		{
			if (ft_lstsize(stack_a) == 3)
				three(&stack_a);
			else if (ft_lstsize(stack_a) == 5)
				five(&stack_a, &stack_b);
			else
			{
				push_to_b(&stack_a, &stack_b);
				push_to_a(&stack_a, &stack_b);
			}
		}
	}
	ft_lstclear(stack_a);
	return (0);
}
