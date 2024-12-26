int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	fact = nb * ft_recursive_factorial(nb - 1);
	return (fact);
}
/*
#include <stdio.h>
int main()
{
	int	nb = 0;
	printf("%i! = %i", nb, ft_recursive_factorial(nb));
}
*/
