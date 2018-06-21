/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:00:13 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/21 16:20:45 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z' &&
				(str[i + 1] == '\0' || str[i + 1] == ' ' || str[i + 1] == '\t'))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
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
