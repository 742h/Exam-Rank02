#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list-> data);
		begin_list = begin_list -> next;
	}
}


// int	main(int argc, char *argv[])
// {
// 	int	i;
// 	int	number;

// 	if (argc == 2)
// 	{
// 		i = 1;
// 		number = atoi(argv[1]);
// 		if (number == 1)
// 			printf("1");
// 		while (number >= ++i)
// 		{
// 			if (number % i == 0)
// 			{
// 				printf("%d", i);
// 				if (number == i)
// 					break ;
// 				printf("*");
// 				number /= i;
// 				i = 1;
// 			}
// 		}
// 	}
// 	printf("\n");
// 	return (0);
// }


// int is_prime(int nbr)
// {
// 	int i = 2;

// 	if (nbr <= 1)
// 		return(0);
	
// 	while (i * i <= nbr)
// 	{
// 		if (nbr % i == 0)
// 			return(0);
// 		i++;
// 	}
// 	return(1);
// }

// int main()
// {
// 	printf("%d", is_prime(4));
// }


int main(int argc, char **argv)
{

	if (argc == 3)
	{
		int nbr1 = atoi(argv[1]);
		int nbr2 = atoi(argv[2]);
		if (nbr1 && nbr2)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1  = nbr1 - nbr2;
				else
					nbr2 = nbr2 - nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
}