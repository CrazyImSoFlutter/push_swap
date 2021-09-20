/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   before_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 23:57:04 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/20 16:57:12 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node		*before_move_node_pointer(t_stack *stack, int index)
{
	t_node	*tmp;
	int		i;

	tmp = stack->head;
	i = index;
	while (i > 0)
	{
		tmp = tmp->next;
		i--;
	}
	return (tmp);
}

t_pred		*before_find_sorted(t_stack *stack, int *index)
{
	t_pred	*tmp;
	t_node	*cur;

	tmp = (t_pred *)malloc(sizeof(t_pred));
	tmp->src_index = *index;
	cur = before_move_node_pointer(stack, *index);
	while (cur->next)
	{
		if (cur->number < cur->next->number)
		{
			*index += 1;
			cur = cur->next;
		}
		else
			break;
	}
	tmp->dst_index = *index;
	tmp->sorted_size = tmp->dst_index - tmp->src_index + 1;
	return (tmp);
}

void		before_find_longest_sort(t_pred *pred, t_stack *stack)
{
	t_pred	*tmp;
	int		index;

	index = 0;
	while (index < stack->size)
	{
		tmp = before_find_sorted(stack, &index);
		if (tmp->sorted_size >= pred->sorted_size)
		{
			pred->src_index = tmp->src_index;
			pred->dst_index = tmp->dst_index;
			pred->sorted_size = tmp->sorted_size;
		}
		index++;
	}
}
