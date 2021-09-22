/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 13:00:09 by hnoh              #+#    #+#             */
/*   Updated: 2021/09/22 17:20:24 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char *)dest;
	while (len-- > 0)
		*(string++) = (unsigned char)c;
	return (dest);
}
