/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:33:25 by angrios           #+#    #+#             */
/*   Updated: 2025/11/04 17:20:56 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int	main(void)
{
	t_node	*stack;
	int		value;

	stack = NULL;
	ft_printf("Stack vacío? %d\n", is_empty(stack));

	// Push de varios elementos
	push_node(&stack, create_node(10));
	push_node(&stack, create_node(20));
	push_node(&stack, create_node(30));

	ft_printf("Stack vacío? %d\n", is_empty(stack));

	// Ver valor en el tope sin eliminarlo
	if (peek_node(stack, &value))
		ft_printf("Valor en el tope: %d\n", value);
	else
		ft_printf("No se pudo leer el tope.\n");

	// Pop 1
	if (pop_node(&stack, &value))
		ft_printf("Valor desapilado: %d\n", value);
	else
		ft_printf("Error al desapilar.\n");

	// Pop 2
	if (pop_node(&stack, &value))
		ft_printf("Valor desapilado: %d\n", value);
	else
		ft_printf("Error al desapilar.\n");

	// Peek después de dos pops
	if (peek_node(stack, &value))
		ft_printf("Valor actual en el tope: %d\n", value);
	else
		ft_printf("No se pudo leer el tope.\n");

	// Pop final
	if (pop_node(&stack, &value))
		ft_printf("Valor desapilado: %d\n", value);
	else
		ft_printf("Error al desapilar.\n");

	ft_printf("Stack vacío? %d\n", is_empty(stack));

	return (0);
}
