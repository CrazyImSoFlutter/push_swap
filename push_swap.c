/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:08:35 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/20 22:21:00 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	t_pred		*pred;

	pred = (t_pred *)malloc(sizeof(t_pred));
	pred->src_index = 0;
	pred->dst_index = 0;
	pred->sorted_size = 0;
	stack_a = stack_fill(argc, argv);
	stack_b = stack_init();

	test_print(stack_a);
	before_find_longest_sort(pred, stack_a);

	correction_stack(pred, stack_a);
	test_print(stack_a);
	before_find_longest_sort(pred, stack_a);


	test_print(stack_a);

	sort_a_to_b(pred, stack_a, stack_b);
	test_print(stack_a);
	test_print(stack_b);


	sort_b_to_a(stack_a, stack_b);
	test_print(stack_a);
}
