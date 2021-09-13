/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:58:13 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/14 00:13:13 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct		s_stack
{
	t_node			*head;
	size_t			size;
	size_t			max_count;
}					t_stack;

/*about node*/
int					node_append(t_stack *stack, int num);
int					node_delete(t_stack *stack);

/*about stack*/

