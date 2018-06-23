/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 14:01:38 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/23 14:44:25 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(int nb)
{
	char	*s;

	s = "0123456789abcdef";
	if (nb == 0)
		write(1, "0", 1);
	if (nb / 16)
	{
		ft_print_hex(nb / 16);
		ft_print_hex(nb % 16);
	}
	else
		write(1, &s[nb % 16], 1);
}

int		ft_atoi(char *s)
{
	int		result;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	result = 0;
	if (!(s[i]))
		return (0);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
			|| s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
		i++;
	if (s[i] == '-' || s[i] == '+')
		if (s[i++] == '-')
			sign = -1;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
