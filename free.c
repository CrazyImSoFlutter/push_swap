/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:26:02 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/20 15:43:20 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		free_argv(char **argv)
{
	int		i;

	i = -1;
	while (argv[++i])
		free(argv[i]);
	free(argv);
}

void		free_stack(t_stack *stack)
{
	t_node	*cur;
	t_node	*nex;

	while (stack && stack->head)
	{
		cur = stack->head;
		nex = stack->head;
		while (nex->next)
		{
			cur = nex;
			nex = nex->next;
		}
		if (cur == nex)
		{
			free(stack->head);
			stack->head = NULL;
		}
		else
		{
			cur->next = NULL;
			free(nex);
		}
	}
	free(stack);
}
