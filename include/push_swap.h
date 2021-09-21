/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:58:13 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/21 21:55:34 by nogeun           ###   ########.fr       */
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
	int				max2;
	int				max3;
}					t_stack;

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
t_insert			before_sort_find_best(t_stack *a, t_stack *b);
int					before_sort_count_rb(t_stack *b);

/*about insert*/
void				insert_ra_count(t_insert *ins, t_node *node, t_stack *stk);
void				insert_rb_count_max(t_insert *insert, t_stack *stack);
void				insert_rb_count(t_insert *ins, t_node *node, t_stack *stk);
void				insert_op_count(t_insert *insert);
t_insert			insert_fill(t_node *node, t_stack *a, t_stack *b);

/*about sort*/
void				sort_others(t_stack *a, t_stack *b);
void				sort_three(t_stack *stack);

/*about do op*/
void				do_op_rab(t_insert i, t_stack *a, t_stack *b);
void				do_op_rr(t_insert i, t_stack *a, t_stack *b);
void				do_op_rrr(t_insert i, t_stack *a, t_stack *b);
void				do_op(t_insert i, t_stack *a, t_stack *b);

/*about init*/
void				init_insert(t_insert *insert);

/*about find max*/
void				find_max1(t_stack *stack);
void				find_max2(t_stack *stack);
void				find_max3(t_stack *stack);
void				find_max(t_stack *stack);

/*about test print*/
void				test_print(t_stack *stack);


# endif
