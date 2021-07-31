int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (res-- > 1)
		nb = nb * res;
	return (nb);
}
