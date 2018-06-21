#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	c;

	c = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int		ft_atoi(char *str)
{
	int		i;
	int		num;
	int		sign;

	sign = 1;
	i = 0;
	num = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\n' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '-')
	{
		(str[i] == '-') ? (sign = -1) : (sign = 1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

int		main(int ac, char **av)
{
	int		sum;
	int		num;

	num = 0;
	sum = 0;
	if (ac == 2)
	{
		num = ft_atoi(av[1]);
		while (num > 1)
		{
			if ((num % 2 != 0 || num == 2) && (num % 3 != 0 || num == 3))
				sum += num;
			num--;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
