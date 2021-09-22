/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 10:26:07 by hnoh              #+#    #+#             */
/*   Updated: 2021/09/22 17:21:46 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	array = (char *)malloc(size * count);
	if (!array)
		return (NULL);
	return (ft_memset(array, 0, size * count));
}
