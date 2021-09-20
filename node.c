/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:13:56 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/20 22:45:16 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			node_append(t_stack *stack, int num)
{
	t_node	*new_node;

	if (!(new_node = (t_node*)malloc(sizeof(t_node))))
	{
		free_stack(stack);
		return (0);
	}
	new_node->number = num;
	new_node->next = stack->head;
	if (new_node->number > stack->max)
		stack->max = new_node->number;
	stack->head = new_node;
	stack->size++;
	return (1);
}

int			node_remove(t_stack *stack)
{
	int		num;
	t_node	*del;

	del = stack->head;
	num = del->number;
	stack->head = del->next;
	free(del);
	stack->size--;
	return (num);
}
