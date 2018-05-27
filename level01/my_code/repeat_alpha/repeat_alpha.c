#include <unistd.h>

void	ft_print_alph(char c)
{
	int		count;

	count = 0;
	if ( c >= 'A' && c <= 'Z')
	{
		count = (int)c - 64;
	}
	else
	{
		count = (int)c - 96;
	}
	while (count--)
	{
		write(1, &c, 1);
	}
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'A' && av[1][i] <= 'Z')
					|| (av[1][i] >= 'a' && av[1][i] <= 'z'))
				ft_print_alph(av[1][i]);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
