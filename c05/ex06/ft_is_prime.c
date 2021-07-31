int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	while (nb % a != 0 && a < nb)
		a++;
	if (a == nb)
		return (1);
	return (0);
}
