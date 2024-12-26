int	my_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main()
{
	char	s1[] = "Everything";
	char	s2[] = "Everyone";

	my_strcmp(s1, s2);
	printf("Diference between String1 and String2 is %i.\n",  my_strcmp(s1, s2));
}
*/
