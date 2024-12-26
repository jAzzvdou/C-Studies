/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:24:23 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/18 19:33:15 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*final;

	if (min >= max)
		return (0);
	range = max - min;
	final = (int *)malloc(sizeof(int) * (range));
	if (final == NULL)
		return (NULL);
	range = 0;
	while (max > min)
	{
		final[range] = min;
		min++;
		range++;
	}
	return (final);
}
/*
#include <stdio.h>
int main(void)
{
	int	i = 0;
	int	min = 1981;
	int	max = 2003;
	int	s;
	int	*result;
		
	s = max - min;
	result = ft_range(min, max);
	while (i < s)
	{
		printf("%i.\n", result[i]);
		i++;
	}
}
*/
