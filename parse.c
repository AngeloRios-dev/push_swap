/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:24:46 by angrios           #+#    #+#             */
/*   Updated: 2025/12/05 19:14:10 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	print_err(void)
{
	write(2, "Error\n", 6);
	return (0);
}

static int	is_number(const char *str)
{
	int	i;

	i = 0;
	if (!str || str[0] == '\0')
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static long	ft_atol(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

static int	has_duplicates(t_node *stack)
{
	t_node	*current;
	t_node	*runner;

	current = stack;
	while (current)
	{
		runner = current->next;
		while (runner)
		{
			if (runner->value == current->value)
				return (1);
			runner = runner->next;
		}
		current = current->next;
	}
	return (0);
}

int	parse_args(int argc, char **argv, t_node **stack_a)
{
	int		i;
	long	value;
	t_node	*new;

	i = 1;
	while (i < argc)
	{
		if (!is_number(argv[i]))
			return (print_err());
		value = ft_atol(argv[i]);
		if (value > INT_MAX || value < INT_MIN)
			return (print_err());
		new = create_node((int)value);
		if (!new)
			return (0);
		append_node(stack_a, new);
		i++;
	}
	if (has_duplicates(*stack_a))
		return (print_err());
	return (1);
}
