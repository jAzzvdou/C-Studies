/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caribeir <caribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:02:21 by caribeir          #+#    #+#             */
/*   Updated: 2023/09/13 14:57:43 by jazevedo         ###   ########.fr       */
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
		print_char(x, 'A', 'B', 'C');
		y--;
		while (y > 1)
		{
			print_char(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
			print_char(x, 'C', 'B', 'A');
	}
}
