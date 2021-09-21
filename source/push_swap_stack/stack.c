/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 23:01:24 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/21 22:08:51 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_stack		*stack_init(void)
{
	t_stack	*stack;

	if (!(stack = (t_stack*)malloc(sizeof(t_stack))))
		return (NULL);
	stack->head = NULL;
	stack->size = 0;
	stack->max = -2147483648;
	return (stack);
}

t_stack		*stack_fill(int argc, char **argv)
{
	int		i;
	int		num;
	t_stack	*stack;

	i = argc;
	stack = stack_init();
	if (stack == NULL)
		return (NULL);
	while (--i > 0)
	{
		num = utils_atoi(argv[i]);
		if (!node_append(stack, num))
		{
			free_stack(stack);
			return (NULL);
		}
	}
	return (stack);
}

int			stack_contains(t_stack *stack)
{
	t_node	*std;
	t_node	*cmp;
	
	std = stack->head;
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

int			stack_sorted(t_stack *a, t_stack *b)
{
	t_node	*cur;

	if (!a->head)
		return (0);
	if (b->head != NULL)
		return (0);
	cur = a->head;
	while (cur->next)
	{
		if (cur->number > cur->next->number)
			return (0);
		cur = cur->next;
	}
	return (1);
}
