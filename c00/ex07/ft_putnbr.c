#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	a;

	a = 1;
	if (nb < 0 && nb / 10 == 0)
	{
		ft_putchar('-');
	}
	if (nb < 0)
	{
		a = -1;
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(((nb % 10) * a) + '0');
}
