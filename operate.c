/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:18:56 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/19 18:36:52 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		operate_swap(t_stack *a)
{
	t_node	*one;
	t_node	*two;
	int		tmp;

	if (a->size < 2)
		return ;
	else
	{
		one = a->head;
		two = one->next;
		tmp = head->number;
		one->number = two->number;
		two->number = tmp;
	}
}

void		operate_push(t_stack *a, t_stack *b)
{
	if (b->size == 0)
		return (1);
	else if (!node_append(a, node_delete(b)))
		return (0);
	return (1);
}

void		operate_rotate(t_stack *a)
{
	t_node	*start;
	t_node	*end;

	if (a->size < 2)
		return ;
	end = a->head;
	while (end->next)
		end = end->next;
	start = a->head;
	a->head = a->head->next;
	start->next = NULL;
	end->next = start;
}

void		operate_reverse_rotate(t_stack *a)
{
	t_node	*new_end;
	t_node	*end;

	if (a->size < 2)
		return ;
	end = a->head;
	while (end->next) {
		if (!end->next->next)
			new_end = end;
		end = end->next;
	}
	new_end = NULL;
	end->next = a->head;
	a->head = end;
}
