/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:57:21 by dzborovk          #+#    #+#             */
/*   Updated: 2018/06/27 17:41:14 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		overflow;
	t_list	*current;

	overflow = 0;
	current = lst;
	while (current->next)
	{
		if (cmp(current->data, current->next->data) == 0)
		{
			overflow = current->data;
			current->data = current->next->data;
			current->next->data = overflow;
		}
		else
			current = current->next;
	}
	return (lst);
}

int		ft_cmp(int a, int b)
{
	if (a <= b)
		return (1);
	return (0);
}

int		main(void)
{
	t_list		*node1;
	t_list		*node2;
	t_list		*node3;
	t_list		*current;

	node1 = malloc(sizeof(t_list*));
	node2 = malloc(sizeof(t_list*));
	node3 = malloc(sizeof(t_list*));
	node1->next = node2;
	node1->data = 4548;
	node2->next = node3;
	node2->data = 5;
	node3->next = NULL;
	node3->data = 45;
	current = node1;
	while (current)
	{
		printf("%i\n", current->data);
		current = current->next;
	}
	current = sort_list(node1, &ft_cmp);
	while (current)
	{
		printf("%i\n", current->data);
		current = current->next;
	}
	return (0);
}
