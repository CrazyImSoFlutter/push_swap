/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:40:08 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/20 21:43:10 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		init_insert(t_insert *insert)
{
	insert->rb = 0;
	insert->ra = 0;
	insert->rra = 0;
	insert->rrb = 0;
	insert->op_count = 2147483647;
	insert->number = 0;
	insert->op = 0;
}
