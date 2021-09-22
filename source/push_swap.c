/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:08:35 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/22 15:58:14 by nogeun           ###   ########.fr       */
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
	t_all		all;
	
	stack_a = NULL;
	stack_b = NULL;
	all.flag = 0;
	if (!before_sort_rearrange(&argc, &argv, &all))
		utils_exit(&all, 0);
	if (argc <= 1)
		return (EXIT_SUCCESS);
	if (!check_argument(argc, argv))
		utils_exit(&all, 0);
	if (!(stack_a = stack_fill(argc, argv)))
		utils_exit(&all, 0);
	all.a = stack_a;
	if (!(stack_b = stack_init()))
		utils_exit(&all, 1);
	all.b = stack_b;
	if (!(stack_contains(stack_a)))
		utils_exit(&all, 2);
	if (check_sorted(stack_a, stack_b))
		utils_exit(&all, 3);
	start_sort(stack_a, stack_b);
	utils_exit(&all, 3);
}
