#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = argv[2][0];
	int result;

	if (argc == 4)
	{
		if (a == '+')
			result = atoi(argv[1]) + atoi(argv[3]);
		else if (a == '-')
			result = atoi(argv[1]) - atoi(argv[3]);
		else if (a == '*')
			result = atoi(argv[1]) * atoi(argv[3]);
		else if (a == '/')
			result = atoi(argv[1]) / atoi(argv[3]);
		else if (a == '%')
			result = atoi(argv[1]) % atoi(argv[3]);
		printf("%d", result);
	}
	printf("\n");

}