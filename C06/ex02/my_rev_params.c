#include <unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}

void	reader(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	c;
	int	n;

	c = argc;
	(void)argc;
	n = c - 1;
	while (n < c && n > 0)
	{
		reader(argv[n]);
		putchar('\n');
		n--;
	}
}
