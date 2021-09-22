/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 00:27:37 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/22 17:09:17 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	check_digit(int argc, char **argv)
{
	int		i;
	int		j;

	j = -1;
	while (++j < argc)
	{
		if (!ft_strcmp(argv[j], "-") || !ft_strcmp(argv[j], "+"))
			return (0);
		i = -1;
		if (argv[j][0] == '-' || argv[j][0] == '+')
			i++;
		while (argv[j][++i])
			if (!ft_isdigit(argv[j][i]))
				return (0);
	}
	return (1);
}

int	check_limit(char *str, char sign)
{
	if (sign == ' ' && ft_strcmp(str, "2147483647") > 0)
		return (0);
	else if (sign == '-' && ft_strcmp(str + 1, "2147483648") > 0)
		return (0);
	else if (sign == '+' && ft_strcmp(str + 1, "2147483647") > 0)
		return (0);
	else
		return (1);
}

int	check_integer(char *str)
{
	int		len;
	char	sign;

	sign = ' ';
	len = ft_strlen(str);
	if (str[0] == '-')
	{
		sign = '-';
		len--;
	}
	if (str[0] == '+')
	{
		sign = '+';
		len--;
	}
	if (len > 10)
		return (0);
	else if (len < 10)
		return (1);
	else
		return (check_limit(str, sign));
}

int	check_sorted(t_stack *a, t_stack *b)
{
	t_node	*cur;

	if (!a->head)
		return (0);
	cur = a->head;
	while (cur->next)
	{
		if (cur->number > cur->next->number)
			return (0);
		cur = cur->next;
	}
	if (b->head != NULL)
		return (0);
	return (1);
}

int	check_argument(int argc, char **argv)
{
	int		i;

	i = -1;
	if (!check_digit(argc, argv))
		return (0);
	while (++i < argc)
		if (!check_integer(argv[i]))
			return (0);
	return (1);
}
