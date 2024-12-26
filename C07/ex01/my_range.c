#include <stdlib.h>

int	*my_range(int min, int max)
{
	int	range;
	int	*final;

	if (min >= max)
		return (0);
	range = max - min;
	final = (int *)malloc(sizeof(int) * (range));
	if (final == NULL)
		return (NULL);
	range = 0;
	while (max > min)
	{
		final[range] = min;
		min++;
		range++;
	}
	return (final);
}
/*
#include <stdio.h>
int main(void)
{
	int	i = 0;
	int	min = 1981;
	int	max = 2003;
	int	s;
	int	*result;
		
	s = max - min;
	result = my_range(min, max);
	while (i < s)
	{
		printf("%i.\n", result[i]);
		i++;
	}
}
*/
