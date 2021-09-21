/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_print_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:43:36 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/21 22:07:48 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	do_print_sa(t_stack *stack)
{
	operate_swap(stack);
	write(1, "ra\n", 3);
}

void	do_print_pa(t_stack *a, t_stack *b)
{
	operate_push(a, b);
	write(1, "pa\n", 3);
}

void	do_print_ra(t_stack *stack)
{
	operate_rotate(stack);
	write(1, "ra\n", 3);
}

void	do_print_rra(t_stack *stack)
{
	operate_reverse_rotate(stack);
	write(1, "rra\n", 4);
}
