#include <stdio.h>
#include <stdlib.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	nb;
	unsigned int	check;
	int				temp;

	check = 0;
	temp = 0;
	nb = 0;
	while (nb < size)
	{
		check = nb;
		while (check < size)
		{
			if (tab[nb] > tab[check])
			{
				temp = tab[nb];
				tab[nb] = tab[check];
				tab[check] = temp;
			}
			check++;
		}
		nb++;
	}
}

int		main(void)
{
	int		i;
	int		*tab;
	int		l;
	int		nb;

	nb = 2;
	l = 7;
	i = 0;
	tab = (int*)malloc(sizeof(int) * l);
	while (i < l)
	{
		tab[i] = nb;
		nb *= 3;
		if (i % 2 == 0)
			nb = i;
		i++;
	}
	i = 0;
	sort_int_tab(tab, l);
	while (i < l)
		printf("%i\n", tab[i++]);
	free(tab);
	return (0);
}
