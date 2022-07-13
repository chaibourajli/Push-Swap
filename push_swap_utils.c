/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:13:37 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/06 23:42:50 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	word_number(const char *s, char c)
{
	int		number;
	int		i;

	number = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] && s[i + 1] == c)
			number++;
		i++;
	}
	i--;
	if (i >= 0 && s[i] != c)
		number++;
	return (number);
}

char	**free_tab(char **tab, int n)
{
	while (--n >= 0)
		free(tab[n]);
	free(tab);
	return (0);
}

char	*def_word(char *s, int *len, char c)
{
	int		count;
	char	*temp;
	int		i;

	i = 0;
	count = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	temp = &s[i];
	while (s[i] != '\0' && s[i] != c)
	{
		count++;
		i++;
	}
	*len = count;
	return (temp);
}
