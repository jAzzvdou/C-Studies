#include <unistd.h>

void	my_print_numbers(void)
{
	int	num;

	num = 48;
	while (num <= 57)
	{
		write(1, &num, 1);
		num++;
	}
}
