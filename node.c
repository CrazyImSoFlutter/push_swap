/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:13:56 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/14 00:19:59 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			node_append(t_stack *stack, int num)
{
	t_node	*new_node;

	if (!(new_node = (t_node*)malloc(sizeof(t_node))))
	{
		return (0);
	}
	new_node->number = num;
	new_node->next = stack->head;
}
