#include <unistd.h>

int		ft_strlen(char *s)
{
	int		l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

int		main(int ac, char **av)
{
	int		i2;
	int		l;
	int		i1;

	i2 = 0;
	i1 = 0;
	if (ac == 3)
	{
		l = ft_strlen(av[1]);
		while (i1 < l && av[2][i2])
		{
			if (av[1][i1] == av[2][i2])
				i1++;
			i2++;
		}
		if (i1 == l)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
