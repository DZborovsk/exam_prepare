/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 12:03:23 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/23 13:59:16 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_check(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c < ('A' + base - 10))
			|| (c >= 'a' && c < ('a' + base - 10)));
}

int		ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		sign;
	int		result;

	result = 0;
	sign = 1;
	i = 0;
	if (str_base > 16 || str_base < 2 || !(str))
		return (0);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] && ft_check(str[i], str_base))
	{
		if (str[i] >= 'A' && str[i] <= 'F')
			result = result * str_base + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && str[i] <= 'f')
			result = result * str_base + (str[i] - 'a' + 10);
		else
			result = result * str_base + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int		main(int ac, char **av)
{
	printf("%i\n", ft_atoi_base(av[1], 16));
	return (0);
}
