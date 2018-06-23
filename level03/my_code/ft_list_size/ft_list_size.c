/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:15:18 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/22 13:43:28 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*current;

	current = begin_list;
	size = 0;
	while (current)
	{
		current = current->next;
		size++;
	}
	return (size);
}

int		main(void)
{
	t_list		*fff = NULL;

	fff = malloc(sizeof(t_list));
	fff->data = 0;
	fff->next = NULL;
	printf("%i\n", ft_list_size(fff));
	return (0);
}
