#include <stdlib.h>

static size_t	my_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

static char	*my_strcpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*my_strdup(char *s)
{
	char	*new_str;
	size_t	len;

	len = my_strlen(s);
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	my_strcpy(new_str, s);
	return (new_str);
}

static size_t	get_total_length(int size, char **str, char *sep)
{
	int		i;
	size_t	total_length;

	i = 0;
	total_length = 0;
	while (i < size - 1)
	{
		total_length = total_length + my_strlen(str[i]);
		total_length = total_length + my_strlen(sep);
		i++;
	}
	total_length = total_length + my_strlen(str[i]);
	return (total_length);
}

char	*my_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*new_str;
	size_t	offset;
	size_t	total_length;

	i = 0;
	if (size == 0)
		return (my_strdup(""));
	total_length = get_total_length(size, strs, sep);
	new_str = malloc(sizeof(char) * (total_length + 1));
	if (new_str == NULL)
		return (NULL);
	offset = 0;
	while (i < size - 1)
	{
		my_strcpy(new_str + offset, strs[i]);
		offset = offset + my_strlen(strs[i]);
		my_strcpy(new_str + offset, sep);
		offset = offset + my_strlen(sep);
		i++;
	}
	my_strcpy(new_str + offset, strs[i]);
	return (new_str);
}
/*
#include <stdio.h>
int main()
{
	char	*strs[] = {"Hello", "world", "how", "are", "you?"};
	int	size = 5;
	char	*sep = ", ";
	char	*concatenated = my_strjoin(size, strs, sep);

	printf("Concatenated strings: %s.\n", concatenated);
	free (concatenated);
	return (0);
}
*/
