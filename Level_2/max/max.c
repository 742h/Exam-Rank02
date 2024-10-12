int	max(int* tab, unsigned int len)
{
	char	result;
	int i = 0;

	result = tab[i];

	while (i < len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return(result);
}