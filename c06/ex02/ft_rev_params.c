#include <unistd.h>

void	ft_print(char *str)
{
	int	b;

	b = 0;
	while (str[b] != 0)
	{
		write(1, &str[b], 1);
		b++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		ft_print(argv[argc - 1]);
		argc--;
	}
}
