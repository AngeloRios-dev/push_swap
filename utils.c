/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:59:26 by angrios           #+#    #+#             */
/*   Updated: 2025/12/16 14:39:30 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print_err(void)
{
	write(2, "Error\n", 6);
	return (0);
}

int	free_stack(t_node **stack, int print_error)
{
	t_node	*temp;

	if (!stack)
		return (0);
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
	if (print_error)
		return (print_err());
	return (0);
}
