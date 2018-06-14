#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'm')
				ft_putchar(av[1][i] + 2 * ('m' - av[1][i]) + 1);
			else if (av[1][i] >= 'n' && av[1][i] <= 'z')
				ft_putchar(av[1][i] - 2 * (av[1][i] - 'n') - 1);
			else if (av[1][i] >= 'A' && av[1][i] <= 'M')
				ft_putchar(av[1][i] + 2 * ('M' - av[1][i]) + 1);
			else if (av[1][i] >= 'N' && av[1][i] <= 'Z')
				ft_putchar(av[1][i] - 2 * (av[1][i] - 'N') - 1);
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
