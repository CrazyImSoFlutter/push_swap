/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:37:39 by hnoh              #+#    #+#             */
/*   Updated: 2021/09/22 14:45:02 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

size_t		ft_strnlen(const char *s, size_t maxlen)
{
	const char		*p = ft_memchr(s, '\0', maxlen);

	return ((p) ? p - s : maxlen);
}
