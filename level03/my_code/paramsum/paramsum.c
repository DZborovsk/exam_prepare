#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int		main(int ac, char **av)
{
	if (ac > 1 && av[1])
	{
		ft_putnbr(ac - 1);
	}
	write(1, "\n", 1);
	return (0);
}
