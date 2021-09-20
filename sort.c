/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:03:30 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/20 22:30:11 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			sort_a_to_b(t_pred *pred, t_stack *a, t_stack *b)
{
	t_node	*cur;
	int		index;

	cur = a->head;
	index = 0;
	while (index < pred->src_index)
	{
		do_print_pb(b, a);
		index++;
	}
}

void			sort_b_to_a(t_stack *a, t_stack *b)
{
	t_insert	tmp;
	t_insert	best;
	t_node		*cur;
	
	while (b->size != 0)
	{
		cur = b->head;
		init_insert(&best);
		while (cur)
		{
			tmp = insert_fill(cur, a, b);
			if (best.op_count > tmp.op_count)
				best = tmp;
			cur = cur->next;
		}
		printf("%d %d %d\n", best.op_count, best.rb, best.ra);
		do_op(best, a, b);
		do_print_pa(a, b);
	}
}
