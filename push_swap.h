/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:58:13 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/20 21:49:27 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
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
	int				size;
	int				max;
}					t_stack;

typedef struct		s_pred
{
	int				src_index;
	int				dst_index;
	int				sorted_size;
}					t_pred;

typedef struct		s_insert
{
	int				rb;
	int				ra;
	int				rra;
	int				rrb;
	int				op_count;
	int				number;
	int				op;
}					t_insert;

/*about node*/
int					node_append(t_stack *stack, int num);
int					node_remove(t_stack *stack);

/*about stack*/
t_stack				*stack_init(void);
t_stack				*stack_fill(int argc, char **argv);
int					stack_contains(t_stack *stack);
int					stack_sorted(t_stack *a, t_stack *b);

/*about utils*/
int					utils_atoi(const char *str);
int					ft_get_digit_count(long int n);
char				*ft_itoa(int n);
int					utils_min(int a, int b);
int					utils_max(int a, int b);

/*about free*/
void				free_argv(char **argv);
void				free_stack(t_stack *stack);

/*about operate*/
void				operate_swap(t_stack *a);
void				operate_push(t_stack *a, t_stack *b);
void				operate_rotate(t_stack *a);
void				operate_reverse_rotate(t_stack *a);

/*about do_print*/
void				do_print_sa(t_stack *stack);
void				do_print_pa(t_stack *a, t_stack *b);
void				do_print_ra(t_stack *stack);
void				do_print_rra(t_stack *stack);
void				do_print_sb(t_stack *stack);
void				do_print_pb(t_stack *b, t_stack *a);
void				do_print_rb(t_stack *stack);
void				do_print_rrb(t_stack *stack);
void				do_print_ss(t_stack *a, t_stack *b);
void				do_print_rr(t_stack *a, t_stack *b);
void				do_print_rrr(t_stack *a, t_stack *b);

/*about before sort*/
t_pred				*before_find_sorted(t_stack *stack, int *index);
void				before_find_longest_sort(t_pred *pred, t_stack *stack);

/*about correction*/
int					correction_direction(t_pred *pred, t_stack *stack);
void				correction_clockwise(t_pred *pred, t_stack *stack);
void				correction_counter_clockwise(t_pred *pred, t_stack *stack);
void				correction_stack(t_pred *pred, t_stack *stack);

/*about insert*/
void				insert_ra_count(t_insert *ins, t_node *node, t_stack *stk);
void				insert_rb_count_max(t_insert *insert, t_stack *stack);
void				insert_rb_count(t_insert *ins, t_node *node, t_stack *stk);
void				insert_op_count(t_insert *insert);
t_insert			insert_fill(t_node *node, t_stack *a, t_stack *b);

/*about sort*/
void				sort_a_to_b(t_pred *p, t_stack *a, t_stack *b);
void				sort_b_to_a(t_stack *a, t_stack *b);

/*about do op*/
void				do_op_rab(t_insert i, t_stack *a, t_stack *b);
void				do_op_rr(t_insert i, t_stack *a, t_stack *b);
void				do_op_rrr(t_insert i, t_stack *a, t_stack *b);
void				do_op(t_insert i, t_stack *a, t_stack *b);

/*about init*/
void				init_insert(t_insert *insert);
/*about test print*/
void				test_print(t_stack *stack);


# endif
