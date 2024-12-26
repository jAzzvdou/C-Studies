#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	mlt;
	int	n;

	i = 0;
	mlt = 1;
	n = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			mlt = -mlt;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		n = (n * 10) + (str[i] - 48);
		i++;
	}
	n = n * mlt;
	return (n);
}
/*
#include <stdio.h>
int main(void)
{
	char	str[] = "123";
	printf("String to Int: %i.\n", ft_atoi(str));
}
*/
