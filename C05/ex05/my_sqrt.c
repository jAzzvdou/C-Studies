int	my_sqrt(int nb)
{
	long	i;
	long	n;

	i = 2;
	n = nb;
	if (n < 1)
		return (0);
	if (n == 1)
		return (1);
	if (n > 1)
	{
		while (nb >= (i * i))
		{
			if (nb == (i * i))
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int	nb = 2147483647;
	printf("squareroot of %i is %i.\n", nb, my_sqrt(nb));
}
*/
