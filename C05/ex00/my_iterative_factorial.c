/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:33:57 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/18 16:49:49 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	mult;

	i = nb;
	mult = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		while (i > 0 && mult > 0)
		{
			nb = nb * mult;
			mult--;
			i--;
		}
		return (nb);
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int	nb = 0;
	printf("%i! = %i", nb, ft_iterative_factorial(nb));
}
*/
