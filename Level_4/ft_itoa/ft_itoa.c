#include <stdlib.h>
#include <stdio.h>


int counter(int n)
{
	int i = 0;
	if (n == 0)
		return(1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return(i);
}

char	*ft_itoa(int nbr)
{
	int i;
	int sign = 1;
	char *str;

	i = counter(nbr);

	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
		sign *= -1;
	}
	str = (char *)malloc(sizeof (char) * (i + 1));
	if (!str)
		return(NULL);
	{
		str[i] = '\0';
		i--;	
	}
	 if (nbr == 0)
	{
		str[i] = '0';
		return(str);
	}
	
	if (sign == -1)
	str[0] = '-';

	while (nbr != 0)
	{
		str[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i--;
	}
	return(str);
}
