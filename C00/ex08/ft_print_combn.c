/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunykim <gunykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:21:04 by gunykim           #+#    #+#             */
/*   Updated: 2021/09/14 13:41:49 by gunykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	rec(char *a, int n, int index, int c)
{
	int	i;

	if (index == n)
	{
		write(1, a, n);
		if (a[0] != 10 - n + 48)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	i = c;
	while (1)
	{
		if (i > 10 - n + index)
		{
			return ;
		}
		a[index] = i + 48;
		rec(a, n, index + 1, i + 1);
		i++;
	}
	return ;
}

void	ft_print_combn(int n)
{
	char	a[9];

	rec(a, n, 0, 0);
	return ;
}
