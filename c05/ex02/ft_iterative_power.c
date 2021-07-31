int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	res;

	n = 1;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (n < power)
	{
		res *= nb;
		n++;
	}
	return (res);
}
