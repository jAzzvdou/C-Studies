char	*my_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "strupcase";

	printf("Before function: %s.\n", str);
	my_strupcase(str);
	printf("After function: %s.\n", my_strupcase(str));
}
*/
