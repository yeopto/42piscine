/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunykim <gunykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:16:52 by gunykim           #+#    #+#             */
/*   Updated: 2021/09/28 22:16:53 by gunykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
		{
			return (1);
		}
		charset++;
	}
	return (0);
}

int	malloc_len(char *str, char *charset)
{
	int	c;
	int	is_charset;

	c = 0;
	is_charset = 1;
	while (*str)
	{
		if (check_charset(*str, charset) && is_charset)
		{
			c++;
			is_charset = 0;
		}
		else
			is_charset = 1;
		str++;
	}
	return (c);
}

void	ft_strncpy(char *dest, char *point, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = point[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	*point;
	char	**ret;
	int		i;

	ret = (char **)malloc(sizeof(char *) * (malloc_len(str, charset) + 1));
	i = 0;
	while (*str)
	{
		if (!check_charset(*str, charset))
		{
			point = str;
			while (!check_charset(*str, charset) && *str)
				++str;
			ret[i] = (char *)malloc(str - point + 1);
			ft_strncpy(ret[i++], point, (str - point));
		}
		else
			++str;
	}
	ret[i] = 0;
	return (ret);
}
