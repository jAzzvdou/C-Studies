/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:58:09 by jazevedo          #+#    #+#             */
/*   Updated: 2023/09/11 12:04:26 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char	str[] = "UPPERCASE";
	
	ft_str_is_uppercase(str);
	printf("String: %s.\nType: %i.\n", str, ft_str_is_uppercase(str));
}
*/
