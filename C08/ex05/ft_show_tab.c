/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunykim <gunykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:47:43 by gunykim           #+#    #+#             */
/*   Updated: 2021/09/27 00:43:02 by gunykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		write(1, &str[n++], 1);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	n;

	n = 0;
	while (par[n].str)
	{
		ft_putstr(par[n].str);
		ft_putchar('\n');
		ft_putnbr(par[n].size);
		ft_putchar('\n');
		ft_putstr(par[n].copy);
		ft_putchar('\n');
		n++;
	}
}
