/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:59:12 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/20 13:50:57 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (nb < 3)
		return (2);
	if (nb % 2 == 0)
		i = i + 1;
	while (ft_is_prime(i) == 0)
		i++;
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	int	nb = 300;
	printf("Next prime after %i is %i.\n", nb, ft_find_next_prime(nb));
}
*/
