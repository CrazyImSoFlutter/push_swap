/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   before_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 23:57:04 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/22 02:00:26 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_insert		before_sort_find_best(t_stack *a, t_stack *b)
{
	t_node		*cur;
	t_insert	best;
	t_insert	tmp;
	int			i;

	i = 0;
	cur = a->head;
	while (cur->number == a->max ||
			cur->number == a->max2 ||
			cur->number == a->max3)
		cur = cur->next;
	best = insert_fill(cur, a, b);
	cur = a->head;
	while (++i < a->size)
	{
		cur = cur->next;
		tmp = insert_fill(cur, a, b);
		if (tmp.op_count < best.op_count &&
				cur->number != a->max &&
				cur->number != a->max2 &&
				cur->number != a->max3)
			best = tmp;
	}
	return (best);
}

int				before_sort_count_rb(t_stack *b)
{
	t_node		*cur;
	int			count;

	count = 0;
	cur = b->head;
	while (cur)
	{
		if (cur->number == b->max)
			break ;
		count++;
		cur = cur->next;
	}
	return (count);
}

int			before_sort_rearrange(int *argc, char ***argv)
{
	int		i;

	i = 0;
	while (i < *argc - 1)
	{
		(*argv)[i] = (*argv)[i + 1];
		i++;
	}
	(*argv)[i] = 0;
	(*argc)--;
	return (1);
}
