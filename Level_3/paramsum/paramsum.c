#include <unistd.h>

void ft_putnbr(int n)
{
	if (n < 10)
	{
		n = n + '0';
		write (1, &n, 1);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}

}
int main (int argc, char **argv)
{
	(void)argv;
	argc--;
	ft_putnbr(argc);
	write (1, "\n", 1);
}