/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correction.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 23:58:42 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/20 22:10:11 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			correction_direction(t_pred *pred, t_stack *stack)
{
	if ((pred->dst_index + 1) >= (stack->size / 2))
		return (1);
	else
		return (0);
}

void		correction_clockwise(t_pred *pred, t_stack *stack)
{
	int		count;

	count = stack->size - pred->dst_index - 1;
	while (count > 0)
	{
		do_print_rra(stack);
		count--;
	}
}

void		correction_counter_clockwise(t_pred *pred, t_stack *stack)
{
	int		count;

	count = pred->dst_index + 1;
	while (count > 0)
	{
		do_print_ra(stack);
		count--;
	}
}

void		correction_stack(t_pred *pred, t_stack *stack)
{
	int		command;

	command = correction_direction(pred, stack);
	if (command == 1)
		correction_clockwise(pred, stack);
	else
		correction_counter_clockwise(pred, stack);
}
