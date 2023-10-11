/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:53:28 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/18 16:51:08 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	respower;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	respower = nb * ft_recursive_power(nb, power - 1);
	return (respower);
}
/*
#include <stdio.h>
int main()
{
	int	nb = 0;
	int	power = 0;
	printf("%i to the power of %i = %i", nb, power, ft_recursive_power(nb, power));
}
*/
