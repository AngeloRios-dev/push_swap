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



#endif