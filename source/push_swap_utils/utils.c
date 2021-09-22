/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:07:51 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/22 17:42:34 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	utils_atoi(const char *str)
{
	int		sign;
	int		result;

	sign = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str++ - 48);
	}
	return (result * sign);
}

char	*utils_itoa(int n)
{
	char			*str;
	int				i;
	long int		long_n;

	str = (char *)malloc(sizeof(char) * ft_get_digit_count(n));
	if (!str)
		return (NULL);
	i = -1;
	if (n < 0)
	{
		long_n = -n;
		str[++i] = '-';
	}
	else
		long_n = n;
	ft_convert(long_n, str, &i);
	str[++i] = '\0';
	return (str);
}

int	utils_min(int a, int b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}

int	utils_max(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

void	utils_exit(t_all *all, int n)
{
	if (all->flag == 1)
		free_argv(all->argv);
	if (n >= 1)
		free_stack(all->a);
	if (n >= 2)
		free_stack(all->b);
	if (n <= 2)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	if (n > 2)
		exit(EXIT_SUCCESS);
}
