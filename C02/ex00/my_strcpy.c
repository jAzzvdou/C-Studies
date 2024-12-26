char	*my_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char	src[] = "Everything";
	char	dest[11] = "Nothing";

	printf("Before:\n src = %s\n dest = %s\n", src, dest);
	my_strcpy(dest, src);
	printf("After:\n src = %s\n dest = %s\n", src, my_strcpy(dest, src));
}
*/
