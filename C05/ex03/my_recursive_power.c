int	ft_recursive_power(int nb, int power)
{
	int	respower;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	respower = nb * ft_recursive_power(nb, power - 1);
	return (respower);
}
/*
#include <stdio.h>
int main()
{
	int	nb = 0;
	int	power = 0;
	printf("%i to the power of %i = %i", nb, power, ft_recursive_power(nb, power));
}
*/
