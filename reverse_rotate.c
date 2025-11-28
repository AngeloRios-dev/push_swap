/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:09:01 by angrios           #+#    #+#             */
/*   Updated: 2025/11/28 19:34:20 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	aux_reverse_rotate(t_node **stack)
{
	t_node	*last;
	t_node	*current;

	if (!stack || !*stack || !(*stack)->next)
		return (0);
	current = *stack;
	while (current->next->next)
		current = current->next;
	last = current->next;
	current->next = NULL;
	last->next = *stack;
	*stack = last;
	return (1);
}

int	rra(t_node **stack_a, int print)
{
	int	res;

	res = aux_reverse_rotate(stack_a);
	if (res && print)
		ft_printf("rra\n");
	return (res);
}

int	rrb(t_node **stack_b, int print)
{
	int	res;

	res = aux_reverse_rotate(stack_b);
	if (res && print)
		ft_printf("rrb\n");
	return (1);
}

int	rrr(t_node **stack_a, t_node **stack_b)
{
	int	a;
	int	b;

	a = aux_reverse_rotate(stack_a);
	b = aux_reverse_rotate(stack_b);
	if (a || b)
		ft_printf("rrr\n");
	return (1);
}
