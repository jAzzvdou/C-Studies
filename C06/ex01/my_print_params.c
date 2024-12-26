#include <unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}

void	reader(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
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
	n = 1;
	while (n < c)
	{
		reader(argv[n]);
		putchar('\n');
		n++;
	}
}
