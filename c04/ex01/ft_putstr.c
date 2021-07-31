#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char *str;

	str = "";
	ft_putstr(str);
	write(1, "\n", 1);
	str = "This is a test string.";
	ft_putstr(str);
	write(1, "\n", 1);
	str = "This is a gianormous test string, testing to see whatever happens in here....";
	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}
