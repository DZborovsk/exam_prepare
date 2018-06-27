/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 19:36:18 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/27 19:49:31 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	unsigned int	count;
	unsigned int	nbr;

	nbr = 0;
	count = 1;
	if (ac == 2)
	{
		nbr = atoi(av[1]);
		if (nbr == 1)
			printf("1");
		while (nbr >= ++count)
		{
			if (nbr % count == 0)
			{
				printf("%i", count);
				if (nbr == count)
					break ;
				nbr /= count;
				printf("*");
				count = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
