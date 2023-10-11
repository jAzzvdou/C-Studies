/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:45:15 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/20 08:00:42 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	i = 2;
	n = nb;
	if (n < 1)
		return (0);
	if (n == 1)
		return (1);
	if (n > 1)
	{
		while (nb >= (i * i))
		{
			if (nb == (i * i))
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int	nb = 2147483647;
	printf("squareroot of %i is %i.\n", nb, ft_sqrt(nb));
}
*/
