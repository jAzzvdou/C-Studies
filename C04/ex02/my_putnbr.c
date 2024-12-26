#include <unistd.h>

void	my_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0 && nb > -2147483648)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		my_putnbr(nb / 10);
		my_putnbr(nb % 10);
	}
	if (nb < 10 && nb >= 0)
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
}
/*
int main(void)
{
	my_putnbr(-2147483648);
}
*/
