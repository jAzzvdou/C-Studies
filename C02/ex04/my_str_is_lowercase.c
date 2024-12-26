int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
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
	char	str[] = "lowercase";
	
	ft_str_is_lowercase(str);
	printf("String: %s.\nType: %i.\n", str, ft_str_is_lowercase(str));
}
*/
