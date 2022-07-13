/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:55:39 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 23:32:00 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	number(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

int	ft_isdigit(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void	free_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	overflow(long nb)
{
	if (nb >= 2147483647 || nb <= -2147483648)
		return (1);
	return (0);
}

void	ft_creat_stack(char *str, t_list **head)
{
	t_list	*new;

	new = ft_lstnew(ft_atoi(str));
	ft_lstadd_back(head, new);
}
