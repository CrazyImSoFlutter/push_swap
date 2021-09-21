/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:23:49 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/21 22:06:22 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		do_op_rab(t_insert insert, t_stack *a, t_stack *b)
{
	int		i;

	i = -1;
	if (insert.ra < insert.rra)
		while (++i < insert.ra)
			do_print_ra(a);
	else
		while (++i < insert.rra)
			do_print_rra(a);
	i = -1;
	if (insert.rb < insert.rrb)
		while (++i < insert.rb)
			do_print_rb(b);
	else
		while (++i < insert.rrb)
			do_print_rrb(b);
}

void		do_op_rr(t_insert insert, t_stack *a, t_stack *b)
{
	int		i;
	
	i = -1;
	while (++i < utils_min(insert.ra, insert.rb))
		do_print_rr(a, b);
	if (insert.ra > insert.rb)
		while (i++ < insert.ra)
			do_print_ra(a);
	else
		while (i++ < insert.rb)
			do_print_rb(b);
}

void		do_op_rrr(t_insert insert, t_stack *a, t_stack *b)
{
	int		i;

	i = -1;
	while (++i < utils_min(insert.rra, insert.rrb))
		do_print_rrr(a, b);
	if (insert.rra > insert.rrb)
		while (i++ < insert.rra)
			do_print_rra(a);
	else
		while (i++ < insert.rrb)
			do_print_rrb(b);
}

void		do_op(t_insert insert, t_stack *a, t_stack *b)
{
	if (insert.op == 0)
		do_op_rab(insert, a, b);
	else if (insert.op == 1)
		do_op_rr(insert, a, b);
	else
		do_op_rrr(insert, a, b);
}
