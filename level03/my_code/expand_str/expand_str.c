#include <unistd.h>

int		ft_count_word(char *str)
{
	int		word;
	int		i;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (str[i] && str[i] != ' ' && str[i] != '\t')
			word++;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
	}
	return (word);
}

int		main(int ac, char **av)
{
	int		i;
	int		word;

	word = 0;
	i = 0;
	if (ac == 2 && av[1])
	{
		while (av[1][i])
		{
			while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
				i++;
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			{
				write(1, &av[1][i], 1);
				i++;
			}
			if (++word < ft_count_word(av[1]))
				write(1, "   ", 3);
		}
	}
	write(1, "\n", 1);
	return (0);
}
