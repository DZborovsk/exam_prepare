#include <unistd.h>

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		write(1, "z\n", 2);
	}
	else
	{
		while (av[1][i])
		{
			if (av[1][i] == 'z')
			{
				write(1, "z", 1);
				break ;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
