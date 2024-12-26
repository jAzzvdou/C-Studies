int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	int	nb = 0;
	printf("%i is %i.\n", nb, ft_is_prime(nb));
}
*/
