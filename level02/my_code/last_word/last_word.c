#include <unistd.h>

int		ft_count_words(char *str)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
			i++;
		if (str[i])
			words++;
		while (str[i] != ' ' && str[i] != '\t' && str[i])
			i++;
	}
	return (words);
}

void	ft_print_word(char *str, int index)
{
	int		i;

	i = index;
	while (str[i] != ' ' && str[i] != '\t' && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	int		w;

	w = 0;
	i = 0;
	if (ac == 2)
	{
		w = ft_count_words(av[1]);
		while (av[1][i])
		{
			while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
				i++;
			if (av[1][i])
				w--;
			if (w == 0)
				ft_print_word(av[1], i);
			while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
				i++;

			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
