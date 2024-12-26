int	ft_fibonacci(int index)
{
	int	f;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	f = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (f);
}
/*
#include <stdio.h>
int	main(void)
{
	int	index = 0;
	char	str[] = "position of Fibonacci's sequence is";
	printf("The %ird %s %i.\n", index, str, ft_fibonacci(index));
}
*/
