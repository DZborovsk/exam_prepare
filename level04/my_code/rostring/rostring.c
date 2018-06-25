/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:28:50 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/25 18:02:57 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;
	int		last;

	last = 0;
	i = 0;
	if (ac > 1)
	{
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		last = i;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			i++;
		while (av[1][i])
		{
			while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
				i++;
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				write(1, &av[1][i++], 1);
			if (av[1][i] || (av[1][i - 1] != ' ' && av[1][i] != '\t'))
				write(1, " ", 1);
		}
		while (av[1][last] && av[1][last] != ' ' && av[1][last] != '\t')
			write(1, &av[1][last++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
