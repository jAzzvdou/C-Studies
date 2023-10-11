/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caribeir <caribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:26:05 by caribeir          #+#    #+#             */
/*   Updated: 2023/09/04 09:03:08 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int x, char schar, char mchar, char echar)
{
	ft_putchar(schar);
	while ((x - 1) > 1)
	{
		ft_putchar(mchar);
		x--;
	}
	if (x > 1)
		ft_putchar(echar);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_char(x, 'o', '-', 'o');
		y--;
		while (y > 1)
		{
			print_char(x, '|', ' ', '|');
			y--;
		}
		if (y > 0)
			print_char(x, 'o', '-', 'o');
	}
}
