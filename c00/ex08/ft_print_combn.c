#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_range(int *range, int n)
{
	int	a;
	int	show;

	a = 0;
	show = 1;
	while (++a < n)
		if (range[a - 1] >= range[a])
			show = 0;
	if (!show)
		return ;
	a = -1;
	while (++a < n)
		ft_putchar(range[a] + '0');
	if (range[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	a;
	int	range[10];

	a = -1;
	if (n < 0 || n > 10)
		return ;
	while (++a < n)
		range[a] = a;
	while (range[0] <= (10 - n) && n >= 1)
	{
		ft_print_range(range, n);
		if (n == 10)
			break ;
		range[n - 1]++;
		a = n;
		while (a && n > 1)
		{
			a--;
			if (range[a] > 9)
			{
				range[a - 1]++;
				range[a] = 0;
			}
		}
	}
}
