#include <unistd.h>

void	my_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	char	str[] = "String";
	my_putstr(str);
}
*/
