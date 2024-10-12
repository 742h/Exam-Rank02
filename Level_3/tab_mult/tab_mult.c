#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int n)
{
	if (n < 10)
	{
		n = n + '0';
		write (1, &n, 1); 
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}


int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return(result * sign);
}

int	ft_mult(int a, int i)
{
	int v = a * i;
	return(v);
}

int main(int argc, char **argv)
{
	int i = 1;

	if (argc == 2)
	{
		int a = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write (1, " x ", 3);
			ft_putnbr(a);
			write (1, " = ", 3);
			ft_putnbr(ft_mult(a, i));
			i++;
			if (i <= 9)
			write (1, "\n", 1);
		}
	}
	write (1, "\n", 1);
}