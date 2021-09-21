/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:21:01 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/21 22:06:30 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void			insert_ra_count(t_insert *insert, t_node *node, t_stack *stack)
{
	t_node		*cur;
	int			count;

	count = 0;
	cur = stack->head;
	while (cur)
	{
		if (cur->number == node->number)
			break ;
		cur = cur->next;
		count++;
	}
	insert->ra = count;
}

void			insert_rb_count_max(t_insert *insert, t_stack *stack)
{
	t_node		*cur;
	int			count;

	count = 0;
	cur = stack->head;
	while (cur)
	{
		if (cur->number == stack->max)
			break ;
		count++;
		cur = cur->next;
	}
	insert->rb = count;
}

void			insert_rb_count(t_insert *insert, t_node *node, t_stack *stack)
{
	t_node		*cur;
	int			rb_count;
	int			count;
	int			maximum;

	if (!stack->head)
		return ;
	maximum = 2147483647;
	count = 0;
	rb_count = -1;
	cur = stack->head;
	while (cur)
	{
		count++;
		if (cur->number > node->number && cur->number <= maximum)
		{
			maximum = cur->number;
			rb_count = count;
		}
		cur = cur->next;
	}
	insert->rb = rb_count % stack->size;
	if (rb_count == -1)
		insert_rb_count_max(insert, stack);
}

void			insert_op_count(t_insert *insert)
{
	int			rab;
	int			rr;
	int			rrr;

	rab = utils_min(insert->ra, insert->rra) +
		utils_min(insert->rb, insert->rrb);
	rr = utils_max(insert->ra, insert->rb);
	rrr = utils_max(insert->rra, insert->rrb);
	insert->op_count = utils_min(rab, rrr);
	insert->op_count = utils_min(insert->op_count, rr);
	if (insert->op_count == rab)
		insert->op = 0;
	else if (insert->op_count == rr)
		insert->op = 1;
	else
		insert->op = 2;
}

t_insert		insert_fill(t_node *node, t_stack *a, t_stack *b)
{
	t_insert	insert;

	insert_ra_count(&insert, node, a);
	insert.rra = (a->size - insert.ra) % a->size;
	insert_rb_count(&insert, node, b);
	if (b->size == 0)
		insert.rb = 0;
	else
		insert.rb = insert.rb % b->size;
	if (b->size == 0)
		insert.rrb = 0;
	else
		insert.rrb = (b->size - insert.rb) % b->size;
	insert_op_count(&insert);
	return (insert);
}
