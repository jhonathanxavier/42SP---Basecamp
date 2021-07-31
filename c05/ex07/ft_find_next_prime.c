int	ft_prime(int nb)
{
	int	a;

	a = 2;
	while (a * a <= nb && a <= 46341)
	{
		if (nb % a == 0)
			return (0);
		if (a == 2)
			a++;
		else
			a += 2;
	}
	return (nb > 1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_prime(nb) == 0)
	{
		if (nb % 2 && nb > 2)
			nb += 2;
		else
			++nb;
	}
	return (nb);
}
