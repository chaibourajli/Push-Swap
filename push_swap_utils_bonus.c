/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:06:14 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 23:13:09 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	destroy_split(int n, char **str)
{
	while (n >= 0)
	{
		free(str[n]);
		n--;
	}
	free(str);
}

int	stacklen(t_list *a)
{
	int	i;

	i = 0;
	if (a == 0)
		return (-1);
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int	check_sort(t_list *a)
{
	while (a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}
