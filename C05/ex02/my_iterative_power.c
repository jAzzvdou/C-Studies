int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
	{
		while (power > 1)
		{
			nb = i * nb;
			power--;
		}
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	int	nb = 0;
	int	power = 0;
	printf("%i to the power of %i = %i", nb, power, ft_iterative_power(nb, power));
}
*/
