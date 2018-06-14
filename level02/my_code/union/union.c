#include <unistd.h>

int		ft_check_1_argv(char *av1, char av2)
{
	int		i;

	i = 0;
	while (av1[i])
	{
		if (av1[i] == av2)
			return (1);
		i++;
	}
	return (0);
}

void	ft_check_2_argv(char *av1, char *av2)
{
	int		i;
	int		check;

	check = 0;
	i = 0;
	while (av2[i])
	{
//Is it in 1st argv 1 == true
		if (ft_check_1_argv(av1, av2[i]))
			i++;
		else
		{
			while (av2[check] != av2[i])
				check++;
			if (i == check)
				write(1, &av2[i], 1);
			check = 0;
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	int		i;
	int		check;

	check = 0;
	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[1][check] != av[1][i])
				check++;
			if (i == check)
				write(1, &av[1][i], 1);
			i++;
			check = 0;
		}
		ft_check_2_argv(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}
