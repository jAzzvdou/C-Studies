int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
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
	char	str[] = "0123456789";
	
	ft_str_is_numeric(str);
	printf("String: %s.\nType: %i.\n", str, ft_str_is_numeric(str));
}
*/
