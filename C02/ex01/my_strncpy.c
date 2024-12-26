/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:07:37 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/14 20:57:58 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	int	n = 1;
	char	src[] = "Everything";
	char	dest[100] = "Nothing";

	printf("Before:\n src = %s\n dest = %s\n", src, dest);
	printf("After:\n src = %s\n dest = %s\n", src, ft_strncpy(dest, src, n));
}
*/
