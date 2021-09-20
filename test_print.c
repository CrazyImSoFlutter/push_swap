/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:16:19 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/20 18:01:41 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	test_print(t_stack *stack)
{
	write(1, "****stack****\n", 15);
	t_node *cur = stack->head;
	while (cur)
	{
		int num = cur->number;
		
		write(1, ft_itoa(num), ft_get_digit_count(num));
		write(1, "\n", 1);
		cur = cur->next;
	}
}
