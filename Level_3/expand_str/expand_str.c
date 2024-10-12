#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int word = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			while (argv[1][i] == ' ')
				i++;
			
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				word = 1;
				write (1, &argv[1][i], 1);
				i++;
			}
			if ((argv[1][i] == ' ' || argv[1][i] == '\t' ))
			{
				while(argv[1][i] == ' ')
					i++;
				if(argv[1][i] != '\0')	
					write(1, "   ", 3);
			}
		}
	}
	write (1, "\n", 1);
}
