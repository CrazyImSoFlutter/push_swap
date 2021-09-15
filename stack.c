/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 23:01:24 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/16 00:25:55 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*stack_init(void)
{
	t_stack	*stack;

	if (!(stack = (t_stack*)malloc(sizeof(t_stack))))
		return (NULL);
	stack->head = NULL;
	stack->size = 0;
	stack->max_count = 0;
	return (stack);
}

t_stack		*stack_fill(int argc, char **argv)
{
	int		i;
	int		num;
	t_stack	*stack;

	i = argc;
}

int			stack_contains(t_stack *stack)
{
	t_node	*std;
	t_node	*cmp;
	
	
	while (std)
	{
		while (cmp)
		{
			if (std->number == cmp->number)
				return (0);
			cmp = cmp->next;
		}
		std = std->next;
	}
	return (1);
}
