#include <stdlib.h>
//  char    **ft_split(char *str)
//  {
// 	int i = 0;
// 	int j = 0;
// 	int k;
// 	char **result = malloc(1024);
// 	while (str[i] && (str[i] == '\n' && str[i] == ' ' && str[i] == '\t'))
// 	i++;
// 	while (str[i])
// 	{
// 		if (str[i] > 32)
// 		{
// 			k = 0;
// 			result[j][k++] = malloc(1024);
// 			while(str[i] > 32)
// 			{
// 				result[j][k++] = str[i++]; 
// 			}result[j][k] = '\0';
// 			j++;
// 		}
// 		else
// 			i++;
// 	}
// 	result[j] = 0;
// 	return result;
//  }




 char **ft_split(char *str)
{
	int i = 0, j = 0, k;
	char **result = malloc(1024 * sizeof(char *));

	while (str[i])
	{
		// Skip whitespace characters
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		if (str[i] && !(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		{
			result[j] = malloc(1024); // Allocate memory for the next word
			k = 0;
			while (str[i] && !(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
				result[j][k++] = str[i++];
			result[j][k] = '\0';
			j++;
		}
	}
	result[j] = 0; // Null-terminate the array of strings
	return result;
}