#include <stdlib.h>
char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k;

	char **result = malloc(1024);
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] > 32)
		{
			k = 0;
			result[j] = malloc(1024);
			while (str[i] > 32)
			{
				result[j][k++] = str[i++];
			}
				result[j][k] = '\0';
				j++;
		}
		else
			i++;
	}
	result[j] = 0;
	return result;
}

// #include <stdio.h>
// int main()

// {
// 	char **words = ft_split("Hekki ehehe");
// 	printf("%s", words[0]);
// 	printf("%s", words[1]);
// }
