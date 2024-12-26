#include <unistd.h>

void	my_putchar(char c);

void	print_char(int x, char schar, char mchar, char echar)
{
	my_putchar(schar);
	while ((x - 1) > 1)
	{
		my_putchar(mchar);
		x--;
	}
	if (x > 1)
		my_putchar(echar);
	my_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_char(x, 'A', 'B', 'C');
		y--;
		while (y > 1)
		{
			print_char(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
			print_char(x, 'C', 'B', 'A');
	}
}
