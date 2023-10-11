/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:31:36 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/09 11:10:14 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	num;

	num = *a;
	*a = *b;
	*b = num;
}
/*
#include <stdio.h>
int main()
{
	int	*a;
	int	*b;
	int	A;
	int	B;

	A = 0;
	B = 1;
	a = &A;
	b = &B;

	printf("a = %i e b = %i\n", A, B); 
	ft_swap(a, b);
	printf("A = %i e B = %i", A, B);
}
*/
