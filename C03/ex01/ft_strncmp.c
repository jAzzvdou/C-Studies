/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:42:21 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/16 14:34:34 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	int	n = 7;
	char	s1[] = "Everything";
	char	s2[] = "Everyone";

	ft_strncmp(s1, s2, n);
	printf("Comparison between String1 and String2: %i.\n", ft_strncmp(s1, s2, n));
}
*/
