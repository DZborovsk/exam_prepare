#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -(nb);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 10)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
}

int		max(int *tab, unsigned int len)
{
	unsigned int		i;
	int					temp;

	temp = 0;
	i = 0;
	if (len > 0)
	{
		while (i < len)
		{
			if (temp < tab[i])
				temp = tab[i];
			i++;
		}
		return (temp);
	}
	return (0);
}

int		main(void)
{
	int		array[] = {74, 654, -5, 4};
	ft_putnbr(max(array, 4));
	return (0);
}
