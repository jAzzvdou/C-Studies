void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
	int	a;
	int	b;
	int	resultD;
	int	resultM;
	int	*div;
	int	*mod;

	a = 111;
	b = 11;
	div = &resultD;
	mod = &resultR;
	ft_div_mod(a, b, div, mod);
	printf("D = %i e M = %i", resultD, resultM);
}
*/
