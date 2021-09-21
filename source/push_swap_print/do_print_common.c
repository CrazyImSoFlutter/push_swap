/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_print_common.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:54:37 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/21 22:06:01 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	do_print_ss(t_stack *a, t_stack *b)
{
	operate_swap(a);
	operate_swap(b);
	write(1, "ss\n", 3);
}

void	do_print_rr(t_stack *a, t_stack *b)
{
	operate_rotate(a);
	operate_rotate(b);
	write(1, "rr\n", 3);
}

void	do_print_rrr(t_stack *a, t_stack *b)
{
	operate_reverse_rotate(a);
	operate_reverse_rotate(b);
	write(1, "rrr\n", 4);
}
