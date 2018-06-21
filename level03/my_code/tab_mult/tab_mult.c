#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 9)
		ft_putchar(nb + '0');
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int		ft_atoi(char *str)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int		main(int ac, char **av)
{
	int		time;
	int		number;

	number = 0;
	time = 1;
	if (ac == 1)
		write(1, "\n", 1);
	else if (ac == 2)
	{
		number = ft_atoi(av[1]);
		while (time <= 9)
		{
			ft_putnbr(time);
			write(1, " x ", 3);
			ft_putnbr(number);
			write(1, " = ", 3);
			ft_putnbr(time * number);
			write(1, "\n", 1);
			time++;
		}
	}
	return (0);
}
