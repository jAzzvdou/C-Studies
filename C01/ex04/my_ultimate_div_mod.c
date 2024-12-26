void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int main()
{	
	int	num1;
	int	num2;
	int	*a;
	int	*b;
	
	num1 = 111;
	num2 = 11;
	a = &num1;
	b = &num2;

	ft_ultimate_div_mod(a, b);
	printf("div = %i e mod = %i", *a, *b);
}
*/
