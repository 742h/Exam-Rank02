
#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '+')
			i++;
		else if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return(result * sign);
}

void ft_putnbr(int n)
{
	if (n < 0)
	{
		write (1, "-", 1);
		n = n * -1;
	}
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

int is_prime(int nb)
{
	int i = 2;

	if (nb <= 1)
		return(0);
	
	while (i * i <= nb)
	{
		if (nb % i == 0 )
			return(0);
		i++;
	}
	return(1);
}

int main(int argc, char **argv)
{
	int nb;
	int sum = 0;
	if (argc != 2)
		write (1, "0", 1);
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		while (nb > 0)
			if (is_prime(nb--))
			sum = sum + (nb + 1);
		ft_putnbr(sum);
	}
	write (1, "\n", 1);
}