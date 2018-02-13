/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 11:28:20 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/05 13:42:42 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_couplet(int x, int y)
{
	if (!(x >= y))
	{
		ft_putchar(x / 10 + '0');
		ft_putchar(x % 10 + '0');
		ft_putchar(' ');
		ft_putchar(y / 10 + '0');
		ft_putchar(y % 10 + '0');
		if (!(x == 98 && y == 99))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_couplet(i, j);
			j++;
		}
		i++;
	}
}
