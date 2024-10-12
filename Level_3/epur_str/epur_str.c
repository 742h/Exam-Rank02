#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;
	int cnt = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
				write (1, &argv[1][i++], 1);
			while (argv[1][i] == ' ' || argv[1][i] == '\t') {
				cnt++;
				i++;
			}
			if (cnt >= 1 && argv[1][i] != '\0')
				write(1, " ", 1);
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
		}
	}
	write (1, "\n", 1);
}