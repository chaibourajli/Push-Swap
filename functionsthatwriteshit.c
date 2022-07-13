/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functionsthatwriteshit.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:34:27 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 23:41:12 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putnbr(int n)
{
	int		a;
	char	c;

	a = n;
	if (a < 0)
	{
		write(1, "-", 1);
		a *= -1;
	}
	if (a >= 0 && a <= 9)
	{
		c = a + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
