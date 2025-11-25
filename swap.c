/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 20:08:37 by angrios           #+#    #+#             */
/*   Updated: 2025/11/25 15:56:03 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	aux_swap(t_node **stack)
{
	int	tmp;

	if (!stack || !*stack || !(*stack)->next)
		return (0);
	tmp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = tmp;
	return (1);
}

int	sa(t_node **stack_a, int print)
{
	int	res;

	res = aux_swap(stack_a);
	if (print && res)
		ft_printf("sa\n");
	return (res);
}

int	sb(t_node **stack_b, int print)
{
	int	res;

	res = aux_swap(stack_b);
	if (print && res)
		ft_printf("sb\n");
	return (res);
}

int	ss(t_node **stack_a, t_node **stack_b)
{
	aux_swap(stack_a);
	aux_swap(stack_b);
	ft_printf("ss\n");
	return (1);
}
