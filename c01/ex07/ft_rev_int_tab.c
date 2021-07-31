void	ft_rev_int_tab(int *tab, int size)
{
	int	min;
	int	max;
	int	aux;

	min = 0;
	max = size - 1;
	while (min < max)
	{
		aux = tab[min];
		tab[min] = tab[max];
		tab[max] = aux;
		min++;
		max--;
	}
}
