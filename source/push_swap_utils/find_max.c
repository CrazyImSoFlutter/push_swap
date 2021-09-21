/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:16:39 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/21 22:06:59 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		find_max1(t_stack *stack)
{
	t_node	*cur;
	
	stack->max = -2147483648;
	cur = stack->head;
	while (cur)
	{
		if (cur->number > stack->max)
			stack->max = cur->number;
		else
			stack->max = stack->max;
		cur = cur->next;
	}
}

void		find_max2(t_stack *stack)
{
	t_node	*cur;
	
	stack->max2 = -2147483648;
	cur = stack->head;
	while (cur)
	{
		if (cur->number > stack->max2 && cur->number != stack->max)
			stack->max2 = cur->number;
		cur = cur->next;
	}

}

void		find_max3(t_stack *stack)
{
	t_node	*cur;
	
	stack->max3 = -2147483648;
	cur = stack->head;
	while (cur)
	{
		if (cur->number > stack->max3 &&
				cur->number != stack->max &&
				cur->number != stack->max2)
			stack->max3 = cur->number;
		cur = cur->next;
	}

}

void		find_max(t_stack *stack)
{
	find_max1(stack);
	find_max2(stack);
	find_max3(stack);
}
