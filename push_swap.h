/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:25:19 by angrios           #+#    #+#             */
/*   Updated: 2025/12/16 14:27:37 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include <stdlib.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

t_node	*create_node(int value);
int		push_node(t_node **stack, t_node *new_node);
int		pop_node(t_node **stack, int *out_value);
int		peek_node(t_node *stack, int *out_value);
int		is_empty(t_node *stack);
int		ra(t_node **stack_a, int print);
int		rb(t_node **stack_b, int print);
int		rr(t_node **stack_a, t_node **stack_b);
int		rra(t_node **stack_a, int print);
int		rrb(t_node **stack_b, int print);
int		rrr(t_node **stack_a, t_node **stack_b);
int		print_err(void);
int		free_stack(t_node **stack, int print_error);

#endif