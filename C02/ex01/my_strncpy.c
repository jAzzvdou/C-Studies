char	*my_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	int	n = 1;
	char	src[] = "Everything";
	char	dest[100] = "Nothing";

	printf("Before:\n src = %s\n dest = %s\n", src, dest);
	printf("After:\n src = %s\n dest = %s\n", src, my_strncpy(dest, src, n));
}
*/
