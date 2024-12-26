/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:35:00 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/11 10:29:17 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char	src[] = "Everything";
	char	dest[11] = "Nothing";

	printf("Before:\n src = %s\n dest = %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("After:\n src = %s\n dest = %s\n", src, ft_strcpy(dest, src));
}
*/
