int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (nb <= 0)
		return (0);
	while (res < nb && i <= 46341)
	{
		i++;
		res = i * i;
	}
	if (res == nb)
		return (i);
	return (0);
}
