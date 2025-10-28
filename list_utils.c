/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:17:48 by angrios           #+#    #+#             */
/*   Updated: 2025/10/28 17:22:17 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		return (NULL);
	new_node->node_data.stack_value = value;
	new_node->next_node = NULL;
	return (new_node);
}

void	push_node(t_node **stack, t_node *new_node)
{
	if (new_node == NULL)
		return (NULL);
	if (*stack == NULL)
		*stack = new_node;
	else
	{
		new_node->next_node = *stack;
		*stack = new_node;
	}
}

int	pop_node(t_node **stack, int *out_value)
{
	t_node	*temp;

	if (stack == NULL || *stack == NULL || out_value == NULL)
		return (0);
	temp = *stack;
	*out_value = temp->node_data.stack_value;
	*stack = temp->next_node;
	free(temp);
	return (1);
}

int	peek_node(t_node *stack, int *out_value)
{
	if (stack == NULL || out_value == NULL)
		return (0);
	*out_value = stack->node_data.stack_value;
	return (1);
}
