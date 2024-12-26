int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main()
{
	char	*str;

	str = "Count this";
	printf("Count this = %i", my_strlen(str));
}
*/
