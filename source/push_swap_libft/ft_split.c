/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:16:00 by hnoh              #+#    #+#             */
/*   Updated: 2021/09/22 17:51:11 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

size_t	ft_wordcount(char const *s, char c)
{
	char	flag;
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	flag = 1;
	while (*s)
	{
		if (*s == c)
			flag = 1;
		else
		{
			if (flag == 1)
				count++;
			flag = 0;
		}
		s++;
	}
	return (count);
}

int	ft_word_index(const char *s, char c, int i)
{
	int	ret;

	ret = 0;
	while (s[i] != c && s[i] != '\0')
	{
		ret++;
		i++;
	}
	return (ret);
}

char	*ft_next_word(const char *s, char c, int *i)
{
	char	*ret;
	int		k;

	ret = (char *)malloc(sizeof(char) * ft_word_index(s, c, *i) + 1);
	if (!ret)
		return (NULL);
	k = 0;
	while (s[*i] != c && s[*i])
		ret[k++] = s[(*i)++];
	ret[k] = '\0';
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;

	if (s)
	{
		i = 0;
		ret = (char **)malloc(sizeof(char *) * ft_wordcount(s, c) + 1);
		if (!ret)
			return (NULL);
		j = 0;
		while (s[i] != '\0')
		{
			while (s[i] == c && s[i])
				i++;
			if (s[i])
				ret[j++] = ft_next_word(s, c, &i);
		}
		ret[j] = 0;
		return (ret);
	}
	else
		return (NULL);
}
