/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:16:19 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/22 15:30:10 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	test_print(t_stack *stack)
{
	write(1, "****stack****\n", 15);
	t_node *cur = stack->head;
	while (cur)
	{
		int num = cur->number;
		
		printf("%d\n", num);
		cur = cur->next;
	}
}
