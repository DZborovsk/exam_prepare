/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 11:45:15 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/22 12:06:54 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		*arr;
	int		i;

	i = 0;
	arr = 0;
	if (start < end)
	{
		arr = (int*)malloc(end - start + 1);
		while (end >= start)
			arr[i++] = end--;
	}
	else
	{
		arr = (int*)malloc(start - end + 1);
		while (end <= start)
			arr[i++] = end++;
	}
	return (arr);
}

int		main(void)
{
	int		i;
	int		*arr;

	arr = ft_rrange(-1, 2);
	i = 0;
	while (i != 4)
	{
		printf("%i\n", arr[i]);
		i++;
	}
}
