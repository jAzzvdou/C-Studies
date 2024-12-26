/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:18:42 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/16 17:44:24 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}

void	reader(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	c;
	int	n;

	c = argc;
	(void)argc;
	n = c - 1;
	while (n < c && n > 0)
	{
		reader(argv[n]);
		putchar('\n');
		n--;
	}
}
