/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 13:49:14 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/26 14:15:17 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		count_char(int nb)
{
	int		l;

	l = 0;
	if (nb <= 0)
		l++;
	while (nb)
	{
		l++;
		nb /= 10;
	}
	return (l);
}

char	*ft_itoa(int nbr)
{
	char	*s;
	int		i;
	int		temp;

	temp = 0;
	i = count_char(nbr);
	s = (char*)malloc(sizeof(char) * (i + 1));
	if (!(s))
		return ((char*)0);
	s[i] = '\0';
	if (nbr < 0)
		s[0] = '-';
	if (nbr == 0)
		s[0] = '0';
	while (nbr)
	{
		i--;
		temp = nbr % 10;
		if (temp < 0)
			temp *= -1;
		s[i] = temp + '0';
		nbr /= 10;
	}
	return (s);
}

int		main(void)
{
	printf("%s\n", ft_itoa(0));
	return (0);
}
