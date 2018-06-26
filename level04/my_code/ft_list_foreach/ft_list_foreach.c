/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 17:35:56 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/26 18:20:24 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list		*current;

	current = begin_list;
	while (current && f)
	{
		f(current->data);
		current = current->next;
	}
}

void	ft_putstr(void *s)
{
	int		i;
	char	*str;

	str = s;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(void)
{
	t_list		*new;

	new = malloc(sizeof(t_list));
	new->next = NULL;
	new->data = "Hi world";
	ft_list_foreach(new, &ft_putstr);
	return (0);
}
