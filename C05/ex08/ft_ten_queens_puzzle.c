/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:11:47 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/11 19:08:08 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	ten_queens_test(int table[10], int x, int y)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (y == table[i] || i + table[i] == x + y || i - table[i] == x - y)
			return (0);
		i++;
	}
	return (1);
}

void	ten_queens_recur(int table[10], int *res, int pos)
{
	int i;
	int ii;

	if (pos == 10)
	{
		*res = *res + 1;
		ii = 0;
		while (ii < 10)
		{
			put_char(table[ii] + '0');
			ii++;
		}
		put_char('\n');
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			if (ten_queens_test(table, pos, i))
			{
				table[pos] = i;
				ten_queens_recur(table, res, pos + 1);
			}
			i++;
		}
	}
}

int	ten_queens(void)
{
	int		table[10];
	int		i;
	int		result;

	i = 0;
	while (i < 10)
	{
		table[i] = -1;
		i++;
	}
	result = 0;
	ten_queens_recur(table, &result, 0);
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ten_queens());
}
