/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:07:21 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/18 16:50:51 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
	{
		while (power > 1)
		{
			nb = i * nb;
			power--;
		}
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	int	nb = 0;
	int	power = 0;
	printf("%i to the power of %i = %i", nb, power, ft_iterative_power(nb, power));
}
*/
