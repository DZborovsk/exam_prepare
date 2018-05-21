/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 19:25:32 by dzborovk          #+#    #+#             */
/*   Updated: 2018/05/21 19:46:45 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	else
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == 'a')
			{
				ft_putchar(av[1][i]);
				break ;
			}
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
