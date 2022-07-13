/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_fonctions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:15:36 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/13 15:46:22 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

long	ft_atoi(const char *str)
{
	int		i;
	int		signe;
	long	resultat;

	i = 0;
	signe = 1;
	resultat = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + (str[i] - 48);
		i++;
	}
	return (resultat * signe);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	j = 0;
	while (src[j] != '\0')
		j++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	int		words;
	char	*temp;
	char	**split;

	if (!s)
		return (0);
	words = word_number(s, c);
	temp = (char *)s;
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (0);
	len = 0;
	i = 0;
	while (i < words)
	{
		temp = def_word(temp + len, &len, c);
		split[i] = (char *)malloc(len + 1);
		if (!split[i])
			return (free_tab(split, i));
		ft_strlcpy (split[i++], temp, len + 1);
	}
	split[i] = NULL;
	return (split);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				p;

	i = 0;
	p = 0;
	while ((s1[i] || s2[i]) && p == 0 && i < n)
	{
		if (s1[i] != s2[i])
			p = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (p);
}
