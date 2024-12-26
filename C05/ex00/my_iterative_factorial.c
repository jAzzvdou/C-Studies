int	my_iterative_factorial(int nb)
{
	int	i;
	int	mult;

	i = nb;
	mult = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		while (i > 0 && mult > 0)
		{
			nb = nb * mult;
			mult--;
			i--;
		}
		return (nb);
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int	nb = 0;
	printf("%i! = %i", nb, my_iterative_factorial(nb));
}
*/
