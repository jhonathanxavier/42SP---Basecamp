#include <unistd.h>

void	ft_putstr(char *str)
{
	int	str_counter;

	str_counter = 0;
	while (str[str_counter] != '\0')
	{
		write(1, &str[str_counter], 1);
		str_counter++;
	}
}
