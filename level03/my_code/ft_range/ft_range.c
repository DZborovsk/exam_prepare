/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 10:54:20 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/22 11:38:35 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*arr;
	int		size;
	int		i;

	i = 0;
	size = 0;
	if (start < end)
		size = end - start + 1;
	else if (start > end)
		size = start - end + 1;
	arr = (int*)malloc(size);
	if (!(arr))
		return (NULL);
	if (start < end)
		while (start <= end)
			arr[i++] = start++;
	else if (start > end)
		while (start >= end)
			arr[i++] = start--;
	return (arr);
}

int		main(void)
{
	int		i;
	int		*arr;

	i = 0;
	arr = ft_range(-3, -17);
	while (i != 15)
	{
		printf("%i\n", arr[i]);
		i++;
	}
	return (0);
}
