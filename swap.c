/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 20:08:37 by angrios           #+#    #+#             */
/*   Updated: 2025/11/21 19:58:56 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_node **stack_a)
{
	int	tmp;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return (0);
	tmp = (*stack_a)->value;
	(*stack_a)->value = (*stack_a)->next->value;
	(*stack_a)->next->value = tmp;
	ft_printf("sa\n");
	return (1);
}

int	sb(t_node **stack_b)
{
	int	tmp;
	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return (0);
	tmp = (*stack_b)->value;
	(*stack_b)->value = (*stack_b)->next->value;
	(*stack_b)->next->value = tmp;
	ft_printf("sb\n");
	return (1);
}

int	ss(t_node **stack_a, t_node **stack_b)
{

}