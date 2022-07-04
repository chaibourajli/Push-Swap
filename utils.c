/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:06:14 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/04 16:22:10 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *s)
{
	int	i;
	int	sign;
	int	stoi;

	i = 0;
	sign = 1;
	stoi = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'
		|| s[i] == '\f' || s[i] == '\v' || s[i] == '\r')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		stoi = stoi * 10 + (s[i] - '0');
		i++;
	}
	return (stoi * sign);
}

void	ft_putnbr(int n)
{
	int	a;
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

static int	word_count(char *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_fill(char *s, char c)
{
	int		start;
	int		end;
	int		i;
	int		len;
	char	*ptr;

	start = 0;
	i = 0;
	while (s[start] && s[start] == c)
		start++;
	end = start;
	while (s[end] && s[end] != c)
		end++;
	ptr = (char *)malloc(sizeof(char) * (end - start + 1));
	len = end - start;
	while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static char	**ft_free(char ***ptr, int i)
{
	while (--i)
		free(*ptr[i]);
	free(*ptr);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	int		i;
	char	**ptr;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	ptr = (char **)malloc(sizeof(char *) * word_count((char *)s, c) + 1);
	if (!ptr)
		return (NULL);
	while (i < word_count((char *)s, c))
	{
		while (*str && *str == c)
			str++;
		ptr[i] = ft_fill(str, c);
		if (!ptr[i])
			return (ft_free(&ptr, i));
		while (*str && *str != c)
			str++;
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	if (s1 && s2)
	{
		i = ft_strlen(s1);
		j = ft_strlen(s2);
		k = -1;
		res = (char *)malloc(i + j + 1);
		if (!res)
			return (NULL);
		while (s1[++k])
			res[k] = s1[k];
		k = -1;
		while (s2[++k])
		{
			res[i] = s2[k];
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
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