void	my_swap(int *a, int *b)
{
	int	num;

	num = *a;
	*a = *b;
	*b = num;
}
/*
#include <stdio.h>
int main()
{
	int	*a;
	int	*b;
	int	A;
	int	B;

	A = 0;
	B = 1;
	a = &A;
	b = &B;

	printf("a = %i e b = %i\n", A, B); 
	my_swap(a, b);
	printf("A = %i e B = %i", A, B);
}
*/
