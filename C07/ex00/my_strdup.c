/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:55:00 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/21 20:38:39 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		n;
	char	*final;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	final = (char *)malloc(sizeof(char) * (i + 1));
	if (final == NULL)
		return (NULL);
	n = 0;
	while (src[n] != '\0')
	{
		final[n] = src[n];
		n++;
	}
	final[n] = '\0';
	return (final);
}
/*
#include <stdio.h>
int main(void)
{
	char	*str;
	char	*new_str;

	str = "Duplicate";
	new_str = ft_strdup(str);
	printf("%s.\n", new_str);
}
*/
