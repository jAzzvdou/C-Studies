char	*my_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	int				i;
	int				n;

	count = 0;
	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0' && count < nb)
	{
		dest[i] = src[n];
		i++;
		n++;
		count++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{	
	unsigned int	nb = 2;
	char	dest[100] = "Hello ";
	char	src[] = "World";

	my_strncat(dest, src, nb);
	printf("%s.\n", dest);
}
*/
