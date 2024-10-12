void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	if (start > end)
		ft_swap(&start, &end);
		int length = end - start + 1;
	int i = 0;
	int *result = malloc (sizeof(int) * length);
	while (end >= start)
	{
		result[i] = end;
		i++;
		end--;
	}
	return(result);
}

#include <stdio.h>
int main()
{
	int *a = ft_rrange(-1, 4);
	int i = 0;
	while (a[i])
	{
		printf("%d", a[i]);
		i++;
	}
	printf("%d", a[i++]);
	printf("%d", a[i++]);
}