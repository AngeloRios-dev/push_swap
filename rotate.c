/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 08:46:10 by angrios           #+#    #+#             */
/*   Updated: 2025/11/26 11:24:18 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	aux_rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack || !*stack || !(*stack)->next)
		return (0);
	first = *stack;
	*stack = (*stack)->next;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	return (1);
}

int	ra(t_node **stack_a, int print)
{
	int	res;

	res = aux_rotate(stack_a);
	if (res && print)
		ft_printf("ra\n");
	return (res);
}

int	rb(t_node **stack_b, int print)
{
	int	res;

	res = aux_rotate(stack_b);
	if (res && print)
		ft_printf("rb\n");
	return (res);
}

int	rr(t_node **stack_a, t_node **stack_b)
{
	int	a;
	int	b;

	a = aux_rotate(stack_a);
	b = aux_rotate(stack_b);
	if (a || b)
		ft_printf("rr\n");
	return (a || b);
}
