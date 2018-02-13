/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 11:12:02 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/05 11:48:50 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		i;
	char	number;

	i = 0;
	number = '0';
	while (i <= 9)
	{
		ft_putchar(number);
		number++;
		i++;
	}
}
