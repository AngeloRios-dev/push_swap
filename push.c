/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:09:12 by angrios           #+#    #+#             */
/*   Updated: 2025/11/25 16:20:26 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	aux_push(t_node **push_to, t_node **push_from)
{
	int		value;
	t_node	*new;

	if (!push_from || !*push_from)
		return (0);
	if (!pop_node(push_from, &value))
		return (0);
	new = create_node(value);
	if (!new)
		return (0);
	if (!push_node(push_to, new))
	{
		free(new);
		return (0);
	}
	return (1);
}

int	pa(t_node **stack_a, t_node **stack_b, int print)
{
	int	res;

	res = aux_push(stack_a, stack_b);
	if (print && res)
		ft_printf("pa\n");
	return (res);
}

int	pb(t_node **stack_a, t_node **stack_b, int print)
{
	int	res;

	res = aux_push(stack_b, stack_a);
	if (print && res)
		ft_printf("pb\n");
	return (res);
}