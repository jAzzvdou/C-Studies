#include <stdlib.h>

int	my_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*final;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	final = (int *)malloc(sizeof(int) * (size));
	if (final == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = final;
	size = 0;
	while (max > min)
	{
		final[size] = min;
		min++;
		size++;
	}
	return (size);
}
/*
#include <stdio.h>
int main(void)
{
	int	i = 0;
	int	min = 5;
	int	max = 15;
	int	*final;
	int	ult_range;

	ult_range = my_ultimate_range(&final, min, max);
	while (i < ult_range)
	{
		printf("%i.\n", final[i]);
		i++;
	}
}
*/
