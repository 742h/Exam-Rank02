
#include <stdlib.h>
char    *ft_strdup(char *src)
{
	int  i = 0;
	int j = 0;
	while (src[i])
		i++;
	char *dup = malloc(i * sizeof(char) + 1);

	i = 0;
	while (src[i])
	{
		dup[j++] = src[i++];
	}
	return(dup);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_strdup("Hello"));
// }