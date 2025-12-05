/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:17:48 by angrios           #+#    #+#             */
/*   Updated: 2025/12/05 19:18:42 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

int	push_node(t_node **stack, t_node *new_node)
{
	if (stack == NULL || new_node == NULL)
		return (0);
	new_node->next = *stack;
	*stack = new_node;
	return (1);
}

void	append_node(t_node **stack, t_node *new)
{
	t_node	*tmp;

	if (!(*stack))
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

int	pop_node(t_node **stack, int *out_value)
{
	t_node	*temp;

	if (stack == NULL || *stack == NULL || out_value == NULL)
		return (0);
	temp = *stack;
	*out_value = temp->value;
	*stack = temp->next;
	free(temp);
	return (1);
}

int	peek_node(t_node *stack, int *out_value)
{
	if (stack == NULL || out_value == NULL)
		return (0);
	*out_value = stack->value;
	return (1);
}

int	is_empty(t_node *stack)
{
	if (stack == NULL)
		return (1);
	return (0);
}
