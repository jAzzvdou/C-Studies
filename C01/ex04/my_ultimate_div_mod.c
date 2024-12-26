/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:33:33 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/09 13:39:28 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int main()
{	
	int	num1;
	int	num2;
	int	*a;
	int	*b;
	
	num1 = 111;
	num2 = 11;
	a = &num1;
	b = &num2;

	ft_ultimate_div_mod(a, b);
	printf("div = %i e mod = %i", *a, *b);
}
*/
