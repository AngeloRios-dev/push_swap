#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct	s_stack
{
	int	stack_value;
} t_stack;

typedef struct	s_node
{
	t_stack			node_data;
	struct s_node	*next_node;
} t_node;

t_node	*create_node(int value);
int	push_node(t_node **stack, t_node *new_node);
int	pop_node(t_node **stack, int *out_value);
int	peek_node(t_node *stack, int *out_value);
int	is_empty(t_node *stack);

#endif