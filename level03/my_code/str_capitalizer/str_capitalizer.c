#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
			write(1, &str[i++], 1);
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar(str[i++] - 32);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar(str[i++]);
		while (str[i] != ' ' && str[i] != '\t' && str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				ft_putchar(str[i++] + 32);
			else
				write(1, &str[i++], 1);
		}
	}
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[i])
	{
		ft_print(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
