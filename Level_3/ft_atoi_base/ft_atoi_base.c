
int check(char c)
{
	if (c >= '0'  && c <= '9')
		return(c -'0');
	else if (c >= 'a' && c <= 'f')
		return(c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return(c -'A' + 10);
	return(0);
}
int	ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int i = 0;
	int sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i]  <= 'F')
	|| (str[i] >= 'a' && str[i] <= 'f'))
	{
		result = result * str_base + check(str[i]);
		i++;
	}
	return(result * sign);
}
