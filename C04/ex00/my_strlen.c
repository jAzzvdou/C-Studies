int	ft_strlen(char *str)
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
	char	str[] = "Cake is a lie";
	printf("%s = %i charaters.\n", str, ft_strlen(str));
}
*/
