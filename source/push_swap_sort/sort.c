/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:03:30 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/22 15:37:47 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void			sort_others(t_stack *a, t_stack *b)
{
	t_insert	insert;
	int			num;

	while (a->size > 3)
	{
		insert = before_sort_find_best(a, b);
		do_op(insert, a, b);
		do_print_pb(b, a);
	}
	num = before_sort_count_rb(b);
	if (num < (b->size - num) % b->size)
		while (b->head->number != b->max)
			do_print_rb(b);
	else
		while (b->head->number != b->max)
			do_print_rrb(b);
	sort_three(a);
	while (b->head)
	{
		do_print_pa(a, b);
	}
}

void		sort_three(t_stack *stack)
{
	int		first;
	int		second;
	int		third;

	first = stack->head->number;
	second = stack->head->next->number;
	third = stack->head->next->next->number;
	if (first > second && second > third && first > third)
	{
		do_print_sa(stack);
		do_print_rra(stack);
	}
	else if (first < second && second > third && first < third)
	{
		do_print_rra(stack);
		do_print_sa(stack);
	}
	else if (first > second && second < third && first < third)
		do_print_sa(stack);
	else if (first < second && second > third && first > third)
		do_print_rra(stack);
	else if (first > second && second < third && first > third)
		do_print_ra(stack);
}

void		sort_two(t_stack *stack)
{
	if (stack->head->number > stack->head->next->number)
		do_print_sa(stack);
}
