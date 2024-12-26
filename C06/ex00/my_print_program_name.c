#include <unistd.h>

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
	(void)argc;
	reader(argv[0]);
}
