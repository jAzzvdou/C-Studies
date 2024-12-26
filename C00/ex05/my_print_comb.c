#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				my_putchar (a + '0');
				my_putchar (b + '0');
				my_putchar (c + '0');
				if (a != 7)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
