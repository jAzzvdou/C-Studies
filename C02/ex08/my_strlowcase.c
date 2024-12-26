char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "STRLOWCASE";

	printf("Before function: %s.\n", str);
	ft_strlowcase(str);
	printf("After function: %s.\n", ft_strlowcase(str));
}
*/
