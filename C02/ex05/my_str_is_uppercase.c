int	my_str_is_uppercase(char *str)
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
	
	my_str_is_uppercase(str);
	printf("String: %s.\nType: %i.\n", str, my_str_is_uppercase(str));
}
*/
