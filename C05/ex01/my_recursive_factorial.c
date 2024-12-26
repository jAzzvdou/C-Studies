int	my_recursive_factorial(int nb)
{
	int	fact;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	fact = nb * my_recursive_factorial(nb - 1);
	return (fact);
}
/*
#include <stdio.h>
int main()
{
	int	nb = 0;
	printf("%i! = %i", nb, my_recursive_factorial(nb));
}
*/
