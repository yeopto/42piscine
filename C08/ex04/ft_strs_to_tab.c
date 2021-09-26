/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunykim <gunykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:54:17 by gunykim           #+#    #+#             */
/*   Updated: 2021/09/26 18:32:42 by gunykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copy;

	i = 0;
	len = ft_strlen(src);
	copy = malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_stars_to_tab(int ac, char **av)
{
	t_stock_str	*box;
	int			i;

	i = 0;
	box = malloc(sizeof(t_stock_str) * (ac + 1));
	if (box == NULL)
		return (NULL);
	while (i < ac)
	{
		if (box[i].str == NULL || box[i].copy == NULL)
			return (NULL);
		box[i].size = ft_strlen(av[i]);
		box[i].str = ft_strdup(av[i]);
		box[i].copy = ft_strdup(av[i]);
		i++;
	}
	box[i].str = NULL;
	return (box);
}
