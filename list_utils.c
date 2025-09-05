/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:17:48 by angrios           #+#    #+#             */
/*   Updated: 2025/09/05 20:37:00 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Create a node
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

// Put node at the begining of the list
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
