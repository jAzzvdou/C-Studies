/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:16:46 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/21 20:39:52 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*final;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	final = (int *)malloc(sizeof(int) * (size));
	if (final == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = final;
	size = 0;
	while (max > min)
	{
		final[size] = min;
		min++;
		size++;
	}
	return (size);
}
/*
#include <stdio.h>
int main(void)
{
	int	i = 0;
	int	min = 5;
	int	max = 15;
	int	*final;
	int	ult_range;

	ult_range = ft_ultimate_range(&final, min, max);
	while (i < ult_range)
	{
		printf("%i.\n", final[i]);
		i++;
	}
}
*/
