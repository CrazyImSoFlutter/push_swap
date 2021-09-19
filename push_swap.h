/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:58:13 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/19 18:44:40 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_node
{
	int				number;
	struct s_node	*next;
}					t_node;

typedef struct		s_stack
{
	t_node			*head;
	size_t			size;
	size_t			max_count;
}					t_stack;

/*about node*/
int					node_append(t_stack *stack, int num);
int					node_delete(t_stack *stack);

/*about stack*/
t_stack				*stack_init(void);
t_stack				*stack_fill(int argc, char **argv);
int					stack_contains(t_stack *stack);
int					stack_sorted(t_stack *a, t_stack *b);

/*about utils*/
int					utils_atoi(const char *str);

/*about free*/
void				free_argv(char **argv);
void				free_stack(t_stack *stack);

/*about operate*/
void				operate_swap(t_stack *a);
void				operate_push(t_stack *a, t_stack *b);
void				operate_rotate(t_stack *a);
void				operate_reverse_rotate(t_stack *a);
