/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:07:51 by nogeun            #+#    #+#             */
/*   Updated: 2021/09/22 01:41:20 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int			utils_atoi(const char *str)
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

char				*utils_itoa(int n)
{
	char			*str;
	int				digit_count;
	long int		long_n;

	long_n = n;
	digit_count = ft_get_digit_count(long_n);
	if (long_n < 0)
		digit_count++;
	if (!(str = malloc((digit_count + 1) * sizeof(char))))
		return (NULL);
	str[0] = '0';
	if (long_n < 0)
	{
		str[0] = '-';
		long_n *= -1;
	}
	str[digit_count] = '\0';
	while (((digit_count >= 0 && str[0] != '-')
				|| (digit_count > 0 && str[0] == '-')) && long_n != 0)
	{
		str[digit_count - 1] = (long_n % 10) + '0';
		long_n /= 10;
		digit_count--;
	}
	return (str);
}

int			utils_min(int a, int b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}

int			utils_max(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

void		utils_exit(t_stack *a, t_stack *b, char **argv, int n)
{
	if (n >= 1)
		free_stack(a);
	if (n >= 2)
		free_stack(b);
	if (n <= 2) {
		write(1, "Error\n", 6);
		printf("%d\n", n);
		exit(EXIT_FAILURE);
	}
	if (n > 2)
		exit(EXIT_SUCCESS);
	argv = NULL;
}
