#include <unistd.h>

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int		ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	int		i;
	int		i2;

	i2 = 0;
	i = 0;
	if (ac == 3)
	{
		while (av[2][i2])
		{
			if (av[1][i] == av[2][i2] && av[1][i])
				i++;
			i2++;
		}
		if (ft_strlen(av[1]) == i)
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
