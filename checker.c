/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <cbourajl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:16:28 by cbourajl          #+#    #+#             */
/*   Updated: 2022/07/13 17:15:44 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

void	sort_rest(t_list **stack_a, t_list **stack_b, char *line)
{
	if (!ft_strncmp(line, "ss\n", ft_strlen(line)) && *stack_a && *stack_b)
	{
		sb(*stack_a);
		sb(*stack_b);
	}
	else if (!ft_strncmp(line, "rr\n", ft_strlen(line)) && *stack_a && *stack_b)
	{
		rb(stack_a);
		rb(stack_b);
	}
	else if (!ft_strncmp(line, "rrr\n", ft_strlen(line)) && *stack_a && *stack_b)
	{
		rrb(stack_a);
		rrb(stack_b);
	}
	else
	{
		write (1, "Error\n", 6);
		exit(1);
	}
}

void	sort_stack(t_list **stack_a, t_list **stack_b, char *line)
{
	if (!ft_strncmp(line, "sa\n", ft_strlen(line)) && *stack_a)
		sa(*stack_a);
	else if (!ft_strncmp(line, "ra\n", ft_strlen(line)) && *stack_a)
		ra(stack_a);
	else if (!ft_strncmp(line, "rra\n", ft_strlen(line)) && *stack_a)
		rra(stack_a);
	else if (!ft_strncmp(line, "pb\n", ft_strlen(line)) && *stack_a)
		push(stack_a, stack_b, 1);
	else if (!ft_strncmp(line, "sb\n", ft_strlen(line)) && *stack_b)
		sb(*stack_b);
	else if (!ft_strncmp(line, "rb\n", ft_strlen(line)) && *stack_b)
		rb(stack_b);
	else if (!ft_strncmp(line, "rrb\n", ft_strlen(line)) && *stack_b)
		rrb(stack_b);
	else if (!ft_strncmp(line, "pa\n", ft_strlen(line)) && *stack_b)
		push(stack_b, stack_a, 0);
	else
		sort_rest(stack_a, stack_b, line);
	free(line);
}

int	gnl(t_list *stack_a, t_list *stack_b)
{
	char	*line;

	line = get_next_line(0);
	if (!line)
		return (0);
	while (line && line[0])
	{
		sort_stack(&stack_a, &stack_b, line);
		line = get_next_line(0);
	}
	if (check_sort(stack_a))
		return (write (1, "OK\n", 3), 0);
	else
		return (write (1, "KO\n", 3), 0);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	i = 0;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (write(1, "Error\n", 6), 0);
	while (argv[++i])
	{
		if (!verif(argv[i], &stack_a) || !verif_rep(stack_a))
			return (0);
	}
	gnl(stack_a, stack_b);
}
