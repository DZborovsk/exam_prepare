/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 12:44:03 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/22 13:07:32 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int		av_1;
	int		av_2;

	av_1 = 0;
	av_2 = 0;
	if (ac == 3)
	{
		av_1 = atoi(av[1]);
		av_2 = atoi(av[2]);
		if (av_1 > 0 && av_2 > 0)
		{
			while (av_1 != av_2)
			{
				if (av_1 > av_2)
					av_1 = av_1 - av_2;
				else
					av_2 = av_2 - av_1;
			}
			printf("%d", av_1);
		}
	}
	printf("\n");
	return (0);
}
