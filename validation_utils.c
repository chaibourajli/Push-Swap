/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:08:48 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/13 16:48:32 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verif(char *s, t_list **stack_a)
{
	int		i;
	int		j;
	char	**split;

	i = 0;
	if (number(s) == 0)
		return (0);
	split = ft_split(s, ' ');
	if (!split)
		return (0);
	while (split[i])
	{
		j = 0;
		if (overflow(ft_atoi(split[i])) || !ft_isdigit(split[i]))
		{
			ft_lstclear(*stack_a);
			free_array(split);
			return (0);
		}
		ft_creat_stack(split[i], stack_a);
		i++;
	}
	free_array(split);
	return (1);
}

int	verif_rep(t_list *stack_a)
{
	t_list	*lst;
	t_list	*elm1;

	lst = stack_a;
	elm1 = stack_a->next;
	while (lst->next)
	{
		while (elm1)
		{
			if (lst->value == elm1->value)
			{
				ft_lstclear(stack_a);
				write(1, "Error \n", 7);
				return (0);
			}
			elm1 = elm1->next;
		}
		lst = lst->next;
		elm1 = lst->next;
	}
	return (1);
}
