/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:08:35 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/21 22:04:30 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int				main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = stack_fill(argc, argv);
	stack_b = stack_init();
	test_print(stack_a);
	find_max(stack_a);
	if (stack_a->size > 3)
		sort_others(stack_a, stack_b);
	else
		sort_three(stack_a);
	test_print(stack_a);
}
