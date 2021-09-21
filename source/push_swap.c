/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:08:35 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/22 02:21:11 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void			start_sort(t_stack *a, t_stack *b)
{
	if (a->size > 3)
		find_max(a);
	if (a->size == 1)
		return ;
	else if (a->size == 2)
		sort_two(a);
	else if (a->size == 3)
		sort_three(a);
	else
		sort_others(a, b);
}

int				main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = NULL;
	stack_b = NULL;

	if (!before_sort_rearrange(&argc, &argv))
		utils_exit(stack_a, stack_b, argv, 0);
	if (argc <= 1)
		return (EXIT_SUCCESS);
	if (!check_argument(argc, argv))
		utils_exit(stack_a, stack_b, argv, 0);
	if (!(stack_a = stack_fill(argc, argv)))
		utils_exit(stack_a, stack_b, argv, 0);
	if (!(stack_b = stack_init()))
		utils_exit(stack_a, stack_b, argv, 1);
	if (!(stack_contains(stack_a)))
		utils_exit(stack_a, stack_b, argv, 2);
	if (check_sorted(stack_a, stack_b))
		utils_exit(stack_a, stack_b, argv, 3);
	start_sort(stack_a, stack_b);
	test_print(stack_a);
	utils_exit(stack_a, stack_b, argv, 3);
}
